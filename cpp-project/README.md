# C++ Project Documentation

## Project Name
cpp-project

## Description
This project is a simple C++ application that performs basic mathematical operations such as addition, subtraction, multiplication, and division. It is structured into multiple files for better organization and modularity.

## File Structure
```
cpp-project
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── operations.cpp    # Implements mathematical operations
│   ├── operations.h      # Header file for operations
│   ├── utils.cpp         # Utility functions for input/output
│   └── utils.h           # Header file for utility functions
├── CMakeLists.txt        # CMake configuration file
└── README.md             # Project documentation
```

## Building the Project
To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Compile the project:
   ```
   make
   ```

## Running the Application
After building the project, you can run the application using the following command:
```
./cpp-project
```

## Usage
The application will prompt you to enter two numbers and an operation (add, subtract, multiply, divide). It will then display the result of the operation.

## Contributing
Feel free to fork the repository and submit pull requests for any improvements or additional features.

## License
This project is open-source and available under the MIT License.