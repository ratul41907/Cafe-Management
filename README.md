# Nac Cafe Management System


![Build Status](https://img.shields.io/badge/build-passing-brightgreen)


## Overview

The **Nac Cafe Management System** is a C-based application designed to automate the management of a cafe, including managing orders, calculating bills, and handling various payment methods. The system supports menu selection, quantity input, size selection, and billing based on different pricing for small, medium, and large sizes.

This program provides a **user-friendly interface** for cafe staff to efficiently manage customer orders and generate receipts. It also includes a discount system for voucher codes, supporting cash, online transfer, and card payments.

## Key Features

- **User Authentication**: Secure login system with predefined credentials.
- **Menu Management**: A variety of cafe items, including **Mocha**, **Latte**, **Espresso**, **Cappuccino**, and more, with different price points for each size (Small, Medium, Large).
- **Order Processing**: Allows cafe staff to input the number of items, sizes, and quantities for each order, and automatically calculates the total bill.
- **Bill Generation**: The system generates a detailed bill and stores the order details in a file (`memo.txt`).
- **Voucher System**: Allows the application of discounts via voucher codes (e.g., "cgpa" for a 10% discount).
- **Payment Options**: Supports various payment methods, including cash, online money transfer, and credit/debit card payments.

## Technologies Used

- **C Programming Language**: Core logic and functionality are implemented in C.
- **File I/O**: Used for storing receipts and order data in a text file (`memo.txt`).
- **Text-Based GUI**: User interface is designed using text-based prompts (`printf` and `scanf`).

## Structure and Functions

### 1. **Login and Authentication**
   - Users log in to the system with the username `ratul419` and password `123`.
   - If incorrect, the system prompts the user to re-enter credentials until correct input is provided.

### 2. **Menu and Order Management**
   - The system provides a menu of drinks with different sizes and prices.
   - The user selects items by number (e.g., **1 for Mocha**, **2 for White Mocha**).
   - The user can select the quantity and size for each item (small, medium, large).
   - The total bill is calculated and displayed based on the selection.

### 3. **Bill Calculation and Receipt**
   - For each item, the price is calculated based on the selected size and quantity.
   - The final bill is computed and displayed to the user.

### 4. **Voucher System**
   - A voucher code (e.g., `"cgpa"`) applies a 10% discount to the total bill.
   - If the voucher is valid, the discount is applied; if not, an error message is displayed.

### 5. **Payment Methods**
   - The system supports **cash**, **online transfer**, and **card payment** options.
   - The user is prompted to choose a payment method after the bill is calculated.
   - If the payment is successful, a confirmation message is displayed, and the program exits.

### 6. **File Generation**
   - All order details, including item names, quantities, prices, and final bills, are logged into a text file (`memo.txt`).
   - This file can be used for record-keeping and generating physical receipts.

## Functions Breakdown

- **`screen()`**: Displays a splash screen with an ASCII art design before proceeding to the login.
- **`welcome()`**: Displays the login screen and authenticates the user.
- **`menubar()`**: Displays the main menu with options for viewing the menu, calculating bills, or exiting.
- **`menu()`**: Displays the available items and their prices, and allows the user to select items and specify quantities and sizes.
- **`bill()`**: Handles the process of calculating the total bill based on user input and selected items.
- **`finale()`**: Handles the payment process, supporting different payment methods and confirming the payment.

## Installation Guide

1. **Clone or Download the Project**:
   ```bash
   git clone https://github.com/your-username/Nac-Cafe-Management-System.git
2. **Set Up Your Development Environment**:
   - Install a C compiler such as GCC or use an IDE like Code::Blocks, Dev-C++, or Visual Studio.
   - Ensure you have the necessary libraries available (e.g., stdio.h, stdlib.h, string.h).
3. **Compile and Run Application**:
   - Open the project in your IDE or terminal.
   - Compile and run the main.c file to launch the program.
   git clone https://github.com/your-username/Nac-Cafe-Management-System.git
4. **Login**:
   - Log in with the username **ratul419** and **password 123** to access the system.

## How to Use

1. **Login**:
   -Enter the username and password to gain acces to the main menu.
2. **Order Menu**:
   - Select items from the menu and specify the quantity and size for each order.
   - The total bill is calculated based on your selections.
3. **Apply Voucher**:
   - Optionally, you can apply a voucher code to receive a discount (e.g., **"cgpa"** for 10% off).
   - Compile and run the main.c file to launch the program.
   git clone https://github.com/your-username/Nac-Cafe-Management-System.git
4. **Payment**:
   - Choose a payment method (cash, online transfer, or card).
   - Confirm the payment, and the system will display a confirmation message and exit.
5. **Receipt**:
   - A receipt is generated and stored in memo.txt with details about your order, the bill, and payment method.

## Sample Output

1. **Login Screen**:
  User ID: ratul419
  Password: ****

  Logged in Successfully
  
2. **Order Menu**:
  1. Mocha      | Small: 210.00 | Medium: 330.00 | Large: 380.00
  2. White Mocha | Small: 260.00 | Medium: 360.00 | Large: 400.00
  ...

3. **Bill Calculation**:
  Sl | Item Name      | Small(s/S) | Medium(m/M) | Large(l/L) | Quantity | Bill
  1  | Mocha          |    210.00 |    330.00   |   380.00   |    2     | 420.00
  Total Bill: 420.00
  Voucher Activated
  Total Bill After Discount: 378.00

4. **Payment Confirmation**:
  Enter Payment Method:
  1. Cash
  2. Online Money Transfer
  3. Debit/Credit Card

  Money Has Been Transferred
  PAID! Thank you for choosing Nac Cafe ^__^

## Troubleshooting
  - **Invalid Login**: Ensure the correct username (ratul419) and password (123) are entered.
  - **Menu Not Updating**: If the menu is not displaying correctly, check the item selection logic and ensure all products are correctly defined.
  - **Payment Issues**: Ensure that the payment method selected is valid and follow the prompts correctly.

## Contributing

1. Fork the repository.
2. Clone your forked repository locally.
3. Create a new branch for your changes.
4. Make necessary modifications.
5. Submit a pull request describing your changes.
   Please ensure that you follow the coding standards and write clear commit messages.

## Contributor
  - **Arafat Zaman Ratul** - Developer and Creator


   
     
