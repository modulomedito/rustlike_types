# rustlike_types

Rust like C language typedefs header file for C.

## Rust-like Coding Style

Use `"_m_"` (mod) as delimiter of module name (file name) and module contents.

Summary table showed below:

| File            | Object Type                        | Style                                            | Convention                                  | Example                                       | Why                                   |
| --------------- | ---------------------------------- | ------------------------------------------------ | ------------------------------------------- | --------------------------------------------- | ------------------------------------- |
| Source / Header | File name                          | lower_snake_case                                 | `<module_name.c>`                           | `demo_module.c`                               | Namespace isolation                   |
| Source / Header | Public / Private variable          | lower_snake_case                                 | `<module_name>_m_<variable_name>`           | `demo_module_m_variable`                      | Global scope identification           |
| Source / Header | Public / Private function          | lower_snake_case                                 | `<module_name>_m_<function_name>`           | `demo_module_m_do_something()`                | Namespace isolation                   |
| Source / Header | Public / Private pointer reference | lower_snake_case                                 | `<module_name>_m_<pointer_var_name>_ref`    | `const u8* demo_module_m_variable_ref`        | Reference pointer type identification |
| Source / Header | Public / Private pointer mutable   | lower_snake_case                                 | `<module_name>_m_<pointer_var_name>_mut`    | `u8* demo_module_m_variable_mut`              | Mutable pointer type identification   |
| Source / Header | Public / Private array variable    | lower_snake_case                                 | `<module_name>_m_<pointer_var_name>_buf`    | `demo_module_m_variable_buf`                  | Pointer type identification           |
| Source / Header | Public / Private table variable    | lower_snake_case                                 | `<module_name>_m_<pointer_var_name>_tbl`    | `const demo_module_m_variable_tbl[1024]`      | Constant table identification         |
| Source / Header | Public / Private typedef           | PascalCase                                       | `<module_name>_m_<TypeName>`                | `typedef xxx demo_module_m_LengthAndSize`     | Type safety                           |
| Source / Header | Public / Private OOP Function      | PascalCase and lower_snake_case                  | `<module_name>_m_<ClassName>_<method_name>` | `demo_module_m_ClassOne_init()`               | Object-oriented style                 |
| Source / Header | Public / Private macro             | UPPER_SNAKE_CASE                                 | `<MODULE_NAME>_M_<MACRO>`                   | `DEMO_MODULE_M_MAX_SIZE`                      | Macro                                 |
| Source / Header | Public / Private struct            | PascalCase                                       | `<module_name>_m_<StructName>`              | `demo_module_m_SomeStruct`                    | Local scope                           |
| Source / Header | Public / Private union             | PascalCase                                       | `<module_name>_m_<UnionName>`               | `demo_module_m_SomeUnion`                     | Local scope                           |
| Source / Header | Public / Private enum              | PascalCase                                       | `<module_name>_m_<EnumType>`                | `demo_module_m_EnumOne`                       | Clear type identification             |
| Source / Header | Public / Private enum Value        | PascalCase                                       | `<module_name>_m_<EnumType>_<EnumValue>`    | `demo_module_m_EnumOne_Value1`                | Clear type identification             |
| Source / Header | Temp variable                      | lower_snake_case                                 | `<temp_variable_name>`                      | `temp_variable`                               | Temporary variable                    |
| Source / Header | Temp variable pointer              | lower_snake_case                                 | `<temp_variable_name>_ref` or `_mut`        | `const u8* temp_var_ref` / `u8* temp_var_mut` | Temporary pointer (read or write)     |
| Source / Header | Temp variable buffer               | lower_snake_case                                 | `<temp_variable_name>_buf`                  | `temp_var_buf`                                | Temporary buffer                      |
| Source / Header | Param Input                        | lower_snake_case                                 | `<parameter_name>`                          | `param`                                       | Input parameter                       |
| Source / Header | Param Input/Output                 | lower_snake_case                                 | `<parameter_name>_mut`                      | `param_mut`                                   | Input param / Output param            |
| Header          | File name                          | lower_snake_case                                 | `<module_name.h>`                           | `demo_module.h`                               | Namespace isolation                   |
| Header          | Include guard                      | UPPER_SNAKE_CASE                                 | `<FILE_NAME_H>`                             | `DEMO_MODULE_H`                               | Prevent multiple inclusion            |
| Boolean         | Boolean variable refix             | has/is/can                                       |                                             | `is_erased`, `has_request`, `can_be_erased`   | Clear boolean meaning                 |
| Comment         | Doxygen Line                       | /// Comment                                      |                                             | `/// Initialize the module`                   | Documentation                         |
| Comment         | Doxygen Inline                     | ///< Comment                                     |                                             | `i32 value; ///< The value is for ...`        | Documentation                         |
| Comment         | Normal Line                        | // Comment                                       |                                             | `// Process the data`                         | Code explanation                      |
| Comment         | Normal Inline                      | // Comment                                       |                                             | `i32 x; // Counter`                           | Code explanation                      |
| Note            | Private variable or function       | With `static` keyword                            |                                             | `static u8 demo_module__variable;`            |                                       |
| Note            | Public variable or function        | With `extern` keyword and declare in header only |                                             | `extern void demo_module__function(void);`    |                                       |
| Note            | Empty function param               | Filled with void                                 |                                             | `void demo_module__function(void);`           |                                       |
| Note            | Input param                        | With `const` keyword                             |                                             | `const u8* input_data_ref`                    |                                       |
