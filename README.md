🎉 We [Hatim](https://github.com/Hatimsel). and [Omar](https://github.com/RyuzakiiL23). recently completed a custom printf function for the C programming language that we called \_printf! 🚀

## Overview 📝

🖨️ The \_printf() function is used to write output to stdout, the standard output stream, and is optimized to handle various inputs and optional arguments like the standard library function printf. Unlike the standard library files, it doesn't require any external dependencies. The function can print a local buffer of 1024 bytes and can handle larger sets of data.

## Return Values 🔙

👍 Upon successful execution, \_printf() returns the total number of characters printed to stdout (excluding the null byte at the end of strings). If an output error occurs, the function returns a negative value of -1.

## Function Prototype 📜

📄 The function prototype for \_printf is int \_printf(const char format, ...). It requires a mandatory format argument and accepts additional optional arguments.

## Format String 🔍

🔤 The format string is a character string enclosed in double quotes. It consists of directives, ordinary characters (not %), and conversion specifications, which fetch zero or more subsequent arguments. Each conversion specification begins with % and ends with a conversion specifier. Optional flags, field width, precision modifiers, and length modifiers can be included between them.

## Flags and Modifiers 🔢

🚩 Flags modify the output format, field width specifies the minimum width of the output field, precision modifiers limit the number of digits printed after the decimal point, and length modifiers specify the length of the data type to be printed.

## Conclusion 🎓

💻 Overall, our \_printf function is a useful tool for C programmers looking for a custom implementation of printf with added functionality. With the added emojis and titles, we hope this information is presented in a more organized and engaging way!

## Collaborators 🤝

This project is a collaboration between:

- [EL HAMRANI Omar](https://github.com/RyuzakiiL23).
- [SELMUN Hatim](https://github.com/Hatimsel).
