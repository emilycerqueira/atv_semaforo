# 🚦 Semáforo com Raspberry Pi Pico 

**Desenvolvido por Emily Cerqueira**

Este projeto implementa um **semáforo simples** utilizando o microcontrolador **Raspberry Pi Pico**, três LEDs (vermelho, amarelo e verde), e resistores de 330 Ω. O código foi desenvolvido em **C** utilizando o **Pico SDK**.

## 📋 Descrição do Projeto

O semáforo funciona com um **temporizador periódico** configurado para alternar entre os LEDs a cada 3 segundos:

- **Vermelho** 🔴 ➡️ **Amarelo** 🟡 ➡️ **Verde** 🟢 ➡️ (ciclo repetitivo)

## 🚀 Requisitos

- **Microcontrolador**: Raspberry Pi Pico (ou Pico W)
- **Editor de Código**: Visual Studio Code (VS Code)
- **SDK do Raspberry Pi Pico** configurado no sistema

## 🔌 Conexões dos GPIOs

| LED       | Cor    | GPIO |
|-----------|--------|------|
| Vermelho  | 🔴     | 11   |
| Amarelo   | 🟡     | 12   |
| Verde     | 🟢     | 13   |

## ⚙️ Funcionamento do Código

### **Inicialização:**

- Configuração dos pinos dos LEDs como saída.
- Inicia a comunicação serial com `stdio_init_all()`.

### **Temporizador:**

- O `add_repeating_timer_ms()` é usado para alternar o estado dos LEDs a cada 3 segundos.


## 📦 Como Usar

### **1. Instalar o Visual Studio Code**  
Baixe o [Visual Studio Code](https://code.visualstudio.com/) e instale o programa. Configure conforme necessário.

### **2. Instalar as dependências**  
As extensões recomendadas são:
- **C/C++** (Microsoft)
- **CMake Tools**
- **Raspberry Pi Pico**
  
### **3. Clone o Repositório**  
Clone o repositório para o seu computador (caso esteja disponível em um repositório GitHub):  
"https://github.com/emilycerqueira/atv_semaforo.git"

### **4. Teste no Hardware Real**  
- Conecte o **Raspberry Pi Pico** ao computador no modo **BOOTSEL**.
- Compile o projeto no VS Code usando a extensão do **Raspberry Pi Pico**.
- Execute o projeto clicando em **Run Project USB**, localizado abaixo do botão **Compile Project**.

### **5. Simulação (Opcional)**  
Você pode testar o código utilizando o **Wokwi** para simular o comportamento dos LEDs conectados aos GPIOs.
