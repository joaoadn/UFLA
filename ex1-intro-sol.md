
# EX1 - INTRO: Download and Explore a CSV File
**Name:** João Augusto Dias Neto  
**Class:** 14A  

---

## **[PT-BR]**

### 1. Organização dos Arquivos
- Criei a pasta `cnpj_exercise` e naveguei até ela com os seguintes comandos no terminal:


mkdir cnpj_exercise
cd cnpj_exercise


- Baixei o arquivo `Lucro Real.zip` do site da Receita Federal e o movi para a pasta `cnpj_exercise`:

```bash
wget https://arquivos.receitafederal.gov.br/dados/cnpj/regime_tributario/Lucro%20Real.zip
mv "Lucro Real.zip" lucro_real.zip  # espaços no nome são problemáticos
```

- Extraí os arquivos contidos no `Lucro Real.zip` para a pasta `lucro_real`:

```bash
unzip lucro_real.zip -d lucro_real
```

- Renomeei o arquivo `Lucro Real.csv` para `lucro_real.csv`, pois o nome original continha espaços que poderiam causar problemas no terminal:

```bash
mv "lucro_real/Lucro Real.csv" lucro_real/lucro_real.csv  # espaços no nome são problemáticos
```

---

### 2. Verificando os Arquivos Extraídos
Para listar os arquivos extraídos e verificar seus detalhes, executei o comando:

```bash
ls -lh lucro_real
```

**Saída:**

```bash
-rw-r--r-- 1 user user 65M Mar 20 16:45 lucro_real.csv
```

**Explicação:** O comando `ls -lh` lista os arquivos na pasta `lucro_real` e exibe informações detalhadas como permissões, proprietário, tamanho e data de modificação.

---

### 3. Tamanho do Arquivo
Para verificar o tamanho dos arquivos extraídos, executei:

```bash
du -h lucro_real/*
```

**Saída:**

```bash
65M    lucro_real/lucro_real.csv
```

**Explicação:** O comando `du -h` mostra o tamanho do arquivo no formato legível para humanos.

---

### 4. Caminho Absoluto do Arquivo
Para listar o caminho absoluto do arquivo, executei:

```bash
realpath lucro_real/*
```

**Saída:**

```bash
/c/Users/joaoa/OneDrive/Área de Trabalho/cnpj_exercise/lucro_real/lucro_real.csv
```

**Explicação:** O comando `realpath` exibe o caminho completo para o arquivo `lucro_real.csv`.

---

### 5. Identificar o Tipo do Arquivo
Para verificar se o arquivo é texto, binário, CSV, etc., executei:

```bash
file lucro_real/*
```

**Saída:**

```bash
lucro_real/lucro_real.csv: ASCII text, with CRLF line terminators
```

**Explicação:** O comando `file` identifica o tipo do arquivo. Nesse caso, o arquivo é texto ASCII com terminadores de linha CRLF.

---

### 6. Contagem do Número de Linhas
Para contar o número de linhas no arquivo, executei:

```bash
wc -l lucro_real/*
```

**Saída:**

```bash
1722535 lucro_real/lucro_real.csv
```

**Explicação:** O comando `wc -l` conta o número de linhas (ou registros) dentro do arquivo CSV. O arquivo contém 1.722.535 linhas.

---

### 7. Contagem do Número de Colunas
Para contar o número de colunas no arquivo CSV, executei:

```bash
head -n 1 lucro_real/lucro_real.csv | awk -F ',' '{print NF}'
```

**Saída:**

```bash
5
```

**Explicação:** O comando `head -n 1` extrai a primeira linha do arquivo e o `awk -F ',' '{print NF}'` conta o número de colunas (campos) separados por vírgula. O arquivo contém 5 colunas.

---

### 8. Contagem de Valores Únicos na Primeira Coluna
Para contar os valores únicos na primeira coluna do arquivo, executei:

```bash
cut -d ',' -f1 lucro_real/lucro_real.csv | sort | uniq | wc -l
```

**Saída:**

```bash
10
```

**Explicação:** O comando `cut -d ',' -f1` extrai a primeira coluna, `sort | uniq` ordena e remove duplicatas, e `wc -l` conta os valores únicos. Existem 10 valores únicos na primeira coluna.

---

### 9. Automatizando Tudo com um Script Bash
Criei um script Bash para automatizar as etapas acima. Primeiro, criei o script com o comando:

```bash
nano extract_info.sh
```

Dentro do arquivo `extract_info.sh`, coloquei o seguinte conteúdo:

```bash
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
```

Salvei e saí com `CTRL+X`, `Y`, `ENTER`.

Tornei o script executável com o comando:

```bash
chmod +x extract_info.sh
```

---

### 10. Executando o Script
Por fim, executei o script para obter as informações do arquivo:

```bash
./extract_info.sh lucro_real/
```

**Saída:**

```bash
Arquivo: lucro_real.csv
   Tamanho: 65M
   Caminho Absoluto: /c/Users/joaoa/OneDrive/Área de Trabalho/cnpj_exercise/lucro_real/lucro_real.csv
   Tipo:  CSV text
   Linhas: 1722535
   Colunas: 5
   Valores Únicos na Primeira Coluna: 10
------------------------------------
```

**Explicação:** O script percorre o diretório `lucro_real/` e extrai as informações de cada arquivo, mostrando o tamanho, caminho, tipo, número de linhas, número de colunas e valores únicos na primeira coluna.

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


