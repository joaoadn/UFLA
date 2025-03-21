
# EX1 - Introdução: Download e Exploração de CSV  
**Nome:** João Augusto Dias Neto  
**Turma:** 14A  

---

## **[PT-BR]**

## 1. Organização dos Arquivos
- Criei a pasta `cnpj_exercise` e naveguei até ela com os seguintes comandos no terminal:
mkdir cnpj_exercise
cd cnpj_exercise

- Baixei o arquivo `Lucro Real.zip` do site da Receita Federal e o movi para a pasta `cnpj_exercise`.
- Extraí os arquivos contidos no `Lucro Real.zip` para a pasta `lucro_real`.
- Renomeei o arquivo `Lucro Real.csv` para `lucro_real.csv`, pois o nome original continha espaços que poderiam causar problemas no terminal.

---

## 2. Análise do Arquivo

### 📌 Tamanho do arquivo
O arquivo `lucro_real.csv` tem **65 MB**. Esse é o tamanho do arquivo após a extração.


du -h lucro_real/*


**Saída:**

65M    lucro_real/lucro_real.csv


**Explicação:** O comando `du -h` mostra o tamanho do arquivo no formato legível para humanos.

### 📌 Número de linhas
O arquivo contém **1.722.535 linhas**. Este é o número total de registros dentro do arquivo CSV.

wc -l lucro_real/*

**Saída:**

1722535 lucro_real/lucro_real.csv


**Explicação:** O comando `wc -l` conta o número de linhas de um arquivo.

### 📌 Número de colunas
O arquivo possui **5 colunas**. Essas colunas representam os dados estruturados no CSV.


head -n 1 lucro_real/lucro_real.csv | awk -F ',' '{print NF}'


**Saída:**

5


**Explicação:** O comando `head -n 1` extrai a primeira linha do arquivo e o `awk -F ',' '{print NF}'` conta o número de colunas (campos) separados por vírgula.

### 📌 Valores únicos na primeira coluna
Foram encontrados **10 valores únicos** na primeira coluna do arquivo.


cut -d ',' -f1 lucro_real/lucro_real.csv | sort | uniq | wc -l


**Saída:**

10


**Explicação:** O comando `cut -d ',' -f1` extrai a primeira coluna, `sort | uniq` ordena e remove valores duplicados, e `wc -l` conta os valores únicos.

---

## 3. Resultados do Script Automatizado
Para garantir a precisão dos dados e automatizar o processo de análise, utilizei um script Bash para obter as seguintes informações:

- **Tamanho do arquivo**: 65 MB
- **Caminho absoluto do arquivo**: `/c/Users/joaoa/OneDrive/Área de Trabalho/cnpj_exercise/lucro_real/lucro_real.csv`
- **Tipo do arquivo**: CSV text
- **Número de linhas**: 1.722.535
- **Número de colunas**: 5
- **Valores únicos na primeira coluna**: 10

O script foi escrito para iterar sobre os arquivos dentro do diretório `lucro_real/` e coletar essas informações de forma automatizada, como mostrado a seguir:


#!/bin/bash

DATA_DIR=$1 # primeiro parâmetro do script (caminho da pasta)

if [[ ! -d "$DATA_DIR" ]]; then
    echo "Erro: Diretório '$DATA_DIR' não encontrado!"
    exit 1
fi

for file in "$DATA_DIR"/*; do
    if [[ -f "$file" ]]; then
        echo "Arquivo: $(basename "$file")"
        echo "   Tamanho: $(du -h "$file" | cut -f1)"
        echo "   Caminho Absoluto: $(realpath "$file")"
        echo "   Tipo: $(file "$file" | cut -d':' -f2)"
        echo "   Linhas: $(wc -l < "$file")"
        first_line=$(head -n 1 "$file")
        num_columns=$(echo "$first_line" | awk -F ',' '{print NF}')
        echo "   Colunas: $num_columns"
        unique_values=$(cut -d ',' -f1 "$file" | sort | uniq | wc -l)
        echo "   Valores Únicos na Primeira Coluna: $unique_values"
        echo "------------------------------------"
    fi
done


**Explicação do script:** O script percorre todos os arquivos no diretório fornecido e, para cada arquivo, ele coleta:
- Nome do arquivo.
- Tamanho do arquivo.
- Caminho absoluto do arquivo.
- Tipo de arquivo.
- Número de linhas.
- Número de colunas no arquivo CSV.
- Número de valores únicos na primeira coluna.

Após rodar o script, a saída foi:


./extract_info.sh lucro_real/


**Saída do comando:**

Arquivo: lucro_real.csv
   Tamanho: 65M
   Caminho Absoluto: /c/Users/joaoa/OneDrive/Área de Trabalho/cnpj_exercise/lucro_real/lucro_real.csv
   Tipo:  CSV text
   Linhas: 1722535
   Colunas: 5
   Valores Únicos na Primeira Coluna: 10
------------------------------------


---

## 4. Conclusão
Através da análise manual e do script automatizado, consegui obter as informações chave sobre o arquivo `lucro_real.csv`, conforme solicitado na atividade. A utilização do script foi fundamental para acelerar o processo e garantir a precisão dos dados. As informações obtidas são importantes para compreender a estrutura e o conteúdo do arquivo CSV.

---

## **[EN]**

### **File Analysis Summary:**
- **File Size:** 65 MB
- **Number of Rows:** 1,722,535
- **Number of Columns:** 5
- **Unique Values in the First Column:** 10

### **Steps:**
1. Created a directory called `cnpj_exercise`.
2. Downloaded the `Lucro Real.zip` file from the Receita Federal website and moved it to the `cnpj_exercise` folder.
3. Extracted the files into the `lucro_real` folder.
4. Renamed `Lucro Real.csv` to `lucro_real.csv` to avoid issues with spaces in the file name.

### **Automated Script:**
A Bash script was created to automate the file analysis, which provided the above information. It checks the file size, absolute path, type, number of rows, number of columns, and the number of unique values in the first column.

### **Conclusion:**
The manual analysis, coupled with the automation of the Bash script, successfully provided the necessary details about the `lucro_real.csv` file, ensuring accurate data collection and reporting.

---

