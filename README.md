# rustlike_types

Rust like C language typedefs header file for C.

## Rust-like Coding Style

### File Name

- Style: `lower_snake_case`
- Convention:
  - `<module_name.c>`
  - `<module_name.h>`
- Example
  - `my_mod.c`
  - `my_mod.h`
- Reason: One file is one module, file name used as namespace

### Functions

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<function_name>`
- Example
  - Public functionss
    - `u8 my_mod_init(void)`
    - `u32 my_mod_get_number(void)`
  - Private functions
    - `static u8 my_mod_init(void)`
    - `static u32 my_mod_get_number(void)`
- Reason: Namespace prefix, single underscore connection, consistent naming
  regardless of linkage—switching between static and extern does not require
  renaming

### Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<variable_name>`
- Example
  - Public variables
    - `u8 my_mod_var;`
    - `bool my_mod_is_ok;`
  - Private variables
    - `static u8 my_mod_var;`
    - `static bool my_mod_is_ok;`
  - In function variables
    - `u8 var;`
    - `bool is_ok;`
- Reason: File scope variables have namespace prefix with single underscore
  connection, consistent naming regardless of linkage—switching between static
  and extern does not require renaming. In function varibles removes the
  namespace prefix.

#### Reference Pointer Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_ref`
- Example
  - Public reference pointer variables
    - `const u8 *my_mod_var_ref;`
    - `const bool *my_mod_is_ok_ref;`
  - Private reference pointer variables
    - `static const u8 *my_mod_var_ref;`
    - `static const bool *my_mod_is_ok_ref;`
  - In function reference pointer variables
    - `const u8 *var_ref;`
    - `const bool *is_ok_ref;`
- Reason: `_ref` suffix, and `const` decoration to prevent writes

#### Mutable Pointer Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_mut`
- Example
  - Public mutable pointer variables
    - `u8 *my_mod_var_mut;`
    - `bool *my_mod_is_ok_mut;`
  - Private mutable pointer variables
    - `static u8 *my_mod_var_mut;`
    - `static bool *my_mod_is_ok_mut;`
  - In function mutable pointer variables
    - `u8 *var_mut;`
    - `bool *is_ok_mut;`
- Reason: `_mut` suffix

### Buffer Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<variable_name>_buf`
- Example
  - Public variables
    - `u8 my_mod_data_buf[10];`
    - `u32 my_mod_long_buf[16];`
  - Private variables
    - `static u8 my_mod_data_buf[10];`
    - `static u32 my_mod_long_buf[16];`
  - In function variables
    - `u8 data_buf[10];`
    - `u32 long_buf[16];`
- Reason: `_buf` suffix.

#### Reference Buffer Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_buf_ref`
- Example
  - Public reference pointer variables
    - `const u8 *my_mod_var_buf_ref = &my_mod_var_buf[0];`
    - `const bool *my_mod_is_ok_buf_ref = &my_mod_is_ok_buf[0];`
  - Private reference pointer variables
    - `static const u8 *my_mod_var_buf_ref = &my_mod_var_buf[0];`
    - `static const bool *my_mod_is_ok_buf_ref = &my_mod_is_ok_buf[0];`
  - In function reference pointer variables
    - `const u8 *var_ref = &my_mod_var_buf[0];`
    - `const bool *is_ok_ref = &my_mod_is_ok_buf[0];`
- Reason: `_buf_ref` suffix, and `const` decoration to prevent writes

#### Mutable Buffer Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_buf_mut`
- Example
  - Public mutable pointer variables
    - `u8 *my_mod_var_buf_mut = &my_mod_var_buf[0];`
    - `bool *my_mod_is_ok_buf_mut = &my_mod_is_ok_buf[0];`
  - Private mutable pointer variables
    - `static u8 *my_mod_var_buf_mut = &my_mod_var_buf[0];`
    - `static bool *my_mod_is_ok_buf_mut = &my_mod_is_ok_buf[0];`
  - In function mutable pointer variables
    - `u8 *var_buf_mut = &my_mod_var_buf[0];`
    - `bool *is_ok_buf_mut = &my_mod_is_ok_buf[0];`
- Reason: `_buf_mut` suffix

### Table Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_tbl`
- Example
  - Public reference pointer variables
    - `const u8 my_mod_var_tbl[3] = {1, 2, 3};`
  - Private reference pointer variables
    - `static const u8 my_mod_var_tbl[3] = {1, 2, 3};`
  - In function reference pointer variables
    - `const u8 var_tbl[3] = {1, 2, 3};`
- Reason: `_tbl` suffix, and `const` decoration to prevent writes

#### Reference Table Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_tbl_ref`
- Example
  - Public reference pointer variables
    - `const u8 *my_mod_var_tbl_ref = &my_mod_var_tbl[0];`
  - Private reference pointer variables
    - `static const u8 *my_mod_var_tbl_ref = &my_mod_var_tbl[0];`
  - In function reference pointer variables
    - `const u8 var_tbl_ref = &my_mod_var_tbl[0];`
- Reason: `_tbl_ref` suffix, and `const` decoration to prevent writes

#### Mutable Table Variables

- Style: `lower_snake_case`
- Convention:
  - `<module_name>_<pointer_variable_name>_tbl_mut`
- Example
  - Public reference pointer variables
    - `u8 *my_mod_var_tbl_mut = &my_mod_var_tbl[0];`
  - Private reference pointer variables
    - `static u8 *my_mod_var_tbl_mut = &my_mod_var_tbl[0];`
  - In function reference pointer variables
    - `u8 var_tbl_mut = &my_mod_var_tbl[0];`
- Reason: `_tbl_mut` suffix

### Typedef

- Style: `PascalCase`
- Convention:
  - `<module_name>_<TypeName>`
- Example
  - `typedef u8 my_mod_LengthAndSize`
- Reason: Add namespace prefix

### Macro

- Style: `UPPER_SNAKE_CASE`
- Convention:
  - `<MODULE_NAME>_<MACRO>`
- Example
  - Public macro
    - `MY_MOD_MAX_SIZE`
  - Private macro
    - `MY_MOD_MAX_SIZE`
- Reason: Add namespace prefix, consistent naming regardless of linkage

### Include Guard

- Style: `UPPER_SNAKE_CASE`
- Convention:
  - `<MODULE_NAME>_H`
- Example
  ```
  #ifndef MY_MOD_H
  #define MY_MOD_H
  ...
  #endif
  ```
- Reason: Add namespace prefix, consistent naming regardless of linkage

### Struct

- Style: `PascalCase`
- Convention:
  - `<module_name>_<StructName>`
- Example
  - Public struct
    - `struct my_mod_SomeStruct`
  - Private struct
    - `struct my_mod_SomeStruct`
- Reason: Add namespace prefix

#### Struct (Class) Method

- Style: `PascalCase` + `lower_snake_case`
- Convention:
  - `<module_name>_<StructName>_<method_name>`
- Example
  - Public struct method
    - `void my_mod_SomeStruct_do_something(my_mod_SomeStruct *self)`
  - Private struct method
    - `static void my_mod_SomeStruct_do_something(my_mod_SomeStruct *self)`
- Reason: Add namespace prefix

### Union

- Style: `PascalCase`
- Convention:
  - `<module_name>_<UnionName>`
- Example
  - Public union
    - `union my_mod_SomeUnion`
  - Private union
    - `union my_mod_SomeUnion`
- Reason: Add namespace prefix

### Enum

- Style: `PascalCase`
- Convention:
  - `<module_name>_<EnumType>`
- Example
  - Public struct
    - `enum my_mod_SomeEnum`
  - Private struct
    - `enum my_mod_SomeEnum`
- Reason: Add namespace prefix

#### Enum Value

- Style: `PascalCase`
- Convention:
  - `<module_name>_<EnumType>_<EnumValue>`
- Example
  - Public struct
    - `my_mod_SomeEnum_Val1`
  - Private struct
    - `my_mod_SomeEnum_Val1`
- Reason: Add namespace prefix

### Comments

#### Inline Comments

Normal

```
u8 i; // This is a comment
```

Doxygen style

```
u8 i; ///< This is a comment
```

#### Line Comments

Normal

```
// This is a comment
u8 i;
```

Doxygen style

```
/// This is a comment
u8 i;
```

### Boolean Prefix

Prefix with has/is/can ...

Example:

- `is_erased`
- `has_request`
- `can_be_erased`
