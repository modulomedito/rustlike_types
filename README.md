# rustlike_types

Rust like C language typedefs header file for C.

## Rust-like Coding Style

Summary table showed below:

| File            | Object Type                        | Convention                                                                       | Example                                       | Why                                   |
| --------------- | ---------------------------------- | -------------------------------------------------------------------------------- | --------------------------------------------- | ------------------------------------- |
| Source / Header | File name                          | lower_snake_case:<br>`<module_name.c>`                                           | `demo_module.c`                               | Namespace isolation                   |
| Source / Header | Public / Private variable          | lower_snake_case:<br>`<module_name>__<variable_name>`                            | `demo_module__variable`                       | Global scope identification           |
| Source / Header | Public / Private function          | lower_snake_case:<br>`<module_name>__<function_name>`                            | `demo_module__do_something()`                 | Namespace isolation                   |
| Source / Header | Public / Private pointer reference | lower_snake_case:<br>`<module_name>__<pointer_var_name>_ref`                     | `const u8* demo_module__variable_ref`         | Reference pointer type identification |
| Source / Header | Public / Private pointer mutable   | lower_snake_case:<br>`<module_name>__<pointer_var_name>_mut`                     | `u8* demo_module__variable_mut`               | Mutable pointer type identification   |
| Source / Header | Public / Private array variable    | lower_snake_case:<br>`<module_name>__<pointer_var_name>_buf`                     | `demo_module__variable_buf`                   | Pointer type identification           |
| Source / Header | Public / Private typedef           | PascalCase:<br>`<module_name>__<TypeName>`                                       | `typedef xxx demo_module__LengthAndSize`      | Type safety                           |
| Source / Header | Public / Private OOP Function      | PascalCase and lower*snake_case:<br>`<module_name>\_\_<ClassName>*<method_name>` | `demo_module__ClassOne_init()`                | Object-oriented style                 |
| Source / Header | Public / Private macro             | UPPER_SNAKE_CASE:<br>`<MODULE_NAME>__<MACRO>`                                    | `DEMO_MODULE__MAX_SIZE`                       | Macro                                 |
| Source / Header | Public / Private struct            | PascalCase:<br>`<module_name>__<StructName>`                                     | `demo_module__SomeStruct`                     | Local scope                           |
| Source / Header | Public / Private union             | PascalCase:<br>`<module_name>__<UnionName>`                                      | `demo_module__SomeUnion`                      | Local scope                           |
| Source / Header | Public / Private enum              | PascalCase:<br>`<module_name>__<EnumType>`                                       | `demo_module__EnumOne`                        | Clear type identification             |
| Source / Header | Public / Private enum Value        | PascalCase:<br>`<module_name>__<EnumType>_<EnumValue>`                           | `demo_module__EnumOne_Value1`                 | Clear type identification             |
| Source / Header | Temp variable                      | lower_snake_case:<br>`<temp_variable_name>`                                      | `temp_var`                                    | Temporary variable                    |
| Source / Header | Temp variable pointer              | lower_snake_case:<br>`<temp_variable_name>_ref` or `_mut`                        | `const u8* temp_var_ref` / `u8* temp_var_mut` | Temporary pointer (read or write)     |
| Source / Header | Temp variable buffer               | lower_snake_case:<br>`<temp_variable_name>_buf`                                  | `temp_var_buf`                                | Temporary buffer                      |
| Source / Header | Param Input                        | lower_snake_case:<br>`<parameter_name>`                                          | `param`                                       | Input parameter                       |
| Source / Header | Param Input/Output                 | lower_snake_case:<br>`<parameter_name>_mut`                                      | `param_mut`                                   | Input param / Output param            |
| Header          | File name                          | lower_snake_case:<br>`<module_name.h>`                                           | `demo_module.h`                               | Namespace isolation                   |
| Header          | Include guard                      | UPPER_SNAKE_CASE:<br>`<FILE_NAME_H>`                                             | `DEMO_MODULE_H`                               | Prevent multiple inclusion            |
| Boolean         | Boolean variable refix             | has/is/can                                                                       | `is_erased`, `has_request`, `can_be_erased`   | Clear boolean meaning                 |
| Comment         | Doxygen Line                       | /// Comment                                                                      | /// Initialize the module                     | Documentation                         |
| Comment         | Doxygen Inline                     | ///< Comment                                                                     | `int value; ///< The value is for ...`        | Documentation                         |
| Comment         | Normal Line                        | // Comment                                                                       | // Process the data                           | Code explanation                      |
| Comment         | Normal Inline                      | // Comment                                                                       | `int x; // Counter`                           | Code explanation                      |
| Note that:      | Private variable or function       | With `static` keyword                                                            | `static u8 demo_module__variable;`            |                                       |
| Note that:      | Public variable or function        | With `extern` keyword and declare in header only                                 | `extern void demo_module__function(void);`    |                                       |
| Note that:      | Empty function param               | Filled with void                                                                 | `void demo_module__function(void);`           |                                       |
| Note that:      | Input param                        | With `const` keyword                                                             | `const u8 *input_data_ref`                    |                                       |
