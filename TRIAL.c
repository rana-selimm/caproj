
#include <stdio.h>

int X = 0;
//g
//p
// k
// h
//89
// hhCA Project

//CHAT GPT: DON'T USE  

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define CPU architecture
#define INSTRUCTION_MEMORY_SIZE 1024
#define DATA_MEMORY_SIZE 2048
#define NUM_REGS 64
#define STATUS_REG 65
#define PC_REG 66

uint16_t instruction_memory[INSTRUCTION_MEMORY_SIZE]; // 16-bit instructions
uint8_t data_memory[DATA_MEMORY_SIZE]; // 8-bit data

uint8_t registers[NUM_REGS]; // General-purpose registers
uint8_t status_register; // Status register
uint16_t program_counter; // Program counter

// Instruction set opcodes
#define ADD_OPCODE 0
#define SUB_OPCODE 1
// Add more opcodes as needed...

// Function to load instructions from a file into memory
void load_instructions(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fscanf(file, "%hx", &instruction_memory[i]) != EOF && i < INSTRUCTION_MEMORY_SIZE) {
        i++;
    }

    fclose(file);
}

// Function to fetch an instruction from memory
uint16_t fetch_instruction() {
    return instruction_memory[program_counter];
}

// Function to decode and execute an instruction
void execute_instruction(uint16_t instruction) {
    // Decode instruction
    uint8_t opcode = (instruction >> 12) & 0x0F;

    // Execute instruction
    switch (opcode) {
        case ADD_OPCODE:
            // Execute ADD instruction
            // Update status flags and registers
            break;
        case SUB_OPCODE:
            // Execute SUB instruction
            // Update status flags and registers
            break;
        // Handle other opcodes...
        default:
            printf("Unknown opcode\n");
            exit(EXIT_FAILURE);
    }
}

// Main simulation function
void simulate_cpu(const char *filename) {
    load_instructions(filename);

    while (program_counter < INSTRUCTION_MEMORY_SIZE) {
        uint16_t instruction = fetch_instruction();
        execute_instruction(instruction);
        program_counter++;
    }
}

int main() {
    // Initialize CPU state
    // Set initial values for registers, status register, and program counter

    // Simulate CPU with instructions from file
    simulate_cpu("instructions.txt");

    // Display final CPU state
// mohsen
    return 0;
}

//haidy
//sabry
// hello
