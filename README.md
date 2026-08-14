# rustlike_types

`rltype.h`, a rust-like C language typedefs header file for embedded C project.

## Rust-like Coding Style

| Style ID | Style            |
| -------- | ---------------- |
| S1       | lower_snake_case |
| S2       | UPPER_SNAKE_CASE |
| S3       | PascalCase       |

| Object Type                 | Style                                | Example                       |
| --------------------------- | ------------------------------------ | ----------------------------- |
| File                        | S1:<br>`<file>.c`<br>`<file>.h`      | `file.c`<br>`file.h`          |
| Include Guard               | S3:<br>`<FILE_H>`                    | `FILE_H`                      |
| Macro                       | S2:<br>`<FILE>_<MACRO>`              | `FILE_MAX_SIZE`               |
| Param Input                 | S1:<br>`<parameter>`                 | `u8 param`                    |
| Param Input/Output          | S1:<br>`<parameter>_ptr`             | `const u8* param_ptr`         |
| Temp Variable               | S1:<br>`<variable>`                  | `u8 variable`                 |
| Temp Array                  | S1:<br>`<array>_buf`                 | `u8 array_buf[10]`            |
| Temp Table                  | S1:<br>`<table>_tbl`                 | `const u8 table_tbl[10]`      |
| Pointer of Temp Variable    | S1:<br>`<var>_ptr`                   | `u8* variable_ptr`            |
| Pointer of Temp Array       | S1:<br>`<array>_buf_ptr`             | `u8* array_buf_ptr`           |
| Pointer of Temp Table       | S1:<br>`<table>_tbl_ptr`             | `const u8* table_tbl_ptr`     |
| Global Variable/Array/Table | S1:<br>Add `<file>_` prefix          | `u8 file_variable`            |
| Function                    | S1:<br>`<file>_<func>`               | `void file_my_func(void)`     |
| Struct                      | S3:<br>`<file>_<Struct>`             | `struct file_MyStruct`        |
| Union                       | S3:<br>`<file>_<Union>`              | `union file_MyUnion`          |
| Enum                        | S3:<br>`<file>_<Enum>`               | `enum file_MyEnum`            |
| Enum Value                  | S3:<br>`<file>_<Enum>_<EnumValue>`   | `file_MyEnum_Value1`          |
| OOP Function                | S1, S3:<br>`<file>_<Class>_<method>` | `void file_Class_init(void)`  |
| Typedef                     | S3:<br>`<file>_<TypeName>`           | `typedef u8 file_RawData`     |
| Boolean variable refix      | has/is/can                           | `can_be_erased`               |
| Doxygen Line                | /// Comment                          | /// Initialize the module     |
| Doxygen Inline              | ///< Comment                         | ///< The value is for ...     |
| Normal Line                 | // Comment                           | // Process the data           |
| Normal Inline               | // Comment                           | // Counter of ...             |
| Private variable/function   | With `static` keyword                | `static u8 file_variable`     |
| Public variable/function    | With `extern` keyword                | `extern void file_func(void)` |
| Empty function param        | Filled with void                     | `void file_func(void);`       |

### Suffix

- An array, add `_buf` suffix
- A table, is a `const` decorated array, add `_tbl` suffix
- A pointer, add `_ptr` suffix
- A pointer to an array, add `_buf_ptr` suffix
- A pointer to a table, add `_tbl_ptr` suffix

How about a pointer to a table, which stores many data buffer pointers?

It should be named as `data_buf_ptr_tbl_ptr`.
