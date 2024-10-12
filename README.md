# Geometry Calculator

This is a C++ program that provides basic geometric calculations for circles, rectangles, and triangles. The user can choose to calculate areas, perimeters, or circumferences depending on the shape selected.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

The **Geometry Calculator** allows users to perform six different geometric calculations:
1. Find the area of a circle.
2. Find the area of a rectangle.
3. Find the area of a triangle.
4. Find the circumference of a circle.
5. Find the perimeter of a rectangle.
6. Find the perimeter of a triangle.

The program presents a simple text-based menu that allows users to choose which calculation they would like to perform. After selecting a calculation, the program will prompt the user for the necessary dimensions (such as radius, length, width, base, and height), compute the result, and display it.

## Purpose of Learning

This project was created to help practice and solidify the following C++ programming concepts:
- **Function Prototyping and Definition**: Each calculation is implemented as a separate function.
- **Switch Statements**: A `switch` statement is used to handle user input and direct the flow of the program.
- **Basic Input/Output Handling**: User inputs are processed using `cin`, and results are displayed with `cout`.
- **Mathematical Operations**: The program demonstrates basic mathematical operations like squaring, multiplication, and addition.

## Installation

To run this program on your computer, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/geometry-calculator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd geometry-calculator
    ```

3. Compile the program using a C++ compiler like `g++`:
    ```bash
    g++ Source.cpp -o geometry_calculator
    ```

4. Run the program:
    ```bash
    ./geometry_calculator
    ```

## Usage

Once the program is running, you will be presented with a menu asking you to choose one of the six available geometric calculations. After selecting an option, you will be prompted to enter the relevant dimensions (e.g., radius, length, width, etc.), and the program will calculate and display the result.

### Example:

This is a geometry calculator Choose what you would like to calculate

1. Find the area of a circle
2. Find the area of a rectangle
3. Find the area of a triangle
4. Find the circumference of a circle
5. Find the perimeter of a rectangle
   
 Find the perimeter of a triangle Enter the number of your choice: 1
 
 Enter radius: 5 
 
 The area of the circle is: 78.54


## Features

- **Calculations Included**:
  - Area of a circle, rectangle, and triangle.
  - Circumference of a circle.
  - Perimeter of a rectangle and triangle.
  
- **Simple User Interface**: The program is easy to use with a basic text-based menu and intuitive input prompts.
