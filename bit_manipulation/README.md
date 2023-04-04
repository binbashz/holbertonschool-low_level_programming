# Operaciones bit a bit en C



Operations transforming individual bits of integral data types

En el [lenguaje de programación C](https://en.wikipedia.org/wiki/C_(programming_language) "C (lenguaje de programación)") , las operaciones se pueden realizar a [nivel de bit](https://en.wikipedia.org/wiki/Bit "Poco") usando [operadores bit a bit](https://en.wikipedia.org/wiki/Bitwise_operation "Operación bit a bit") .

Las operaciones bit a bit se contrastan con las operaciones [a nivel de byte](https://en.wikipedia.org/wiki/Byte "Byte") que caracterizan las contrapartes lógicas de los operadores bit a bit, los operadores AND, OR, NOT. En lugar de actuar en bits individuales, los operadores de nivel de byte funcionan en cadenas de ocho bits (conocidos como bytes) a la vez. La razón de esto es que un byte es normalmente la unidad más pequeña de memoria direccionable (es decir, datos con una [dirección de memoria](https://en.wikipedia.org/wiki/Memory_address "Dirección de memoria") única ).

Esto también se aplica a los operadores bit a bit, lo que significa que aunque operan solo en un bit a la vez, no pueden aceptar nada más pequeño que un byte como entrada.

Todos estos operadores también están disponibles en [C++](https://en.wikipedia.org/wiki/C%2B%2B "C++") y muchos lenguajes [de la familia C.](https://en.wikipedia.org/wiki/C-family "familia C")

## Operadores bit a bit \[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=1 "Sección de edición: Operadores bit a bit") \]

C proporciona seis [operadores](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B "Operadores en C y C++") para [la manipulación de bits](https://en.wikipedia.org/wiki/Bit_manipulation "Manipulación de bits") . <sup id="cite_ref-k&amp;r2e_1-0" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-k&amp;r2e-1"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[1]</font></font></a></sup>

| Símbolo | Operador |
| --- | --- |
| `&` | bit a bit Y |
| `|` | bit a bit inclusivo O |
| `^` | XOR bit a bit (OR exclusivo) |
| `<<` | Shift izquierdo |
| `>>` | Giro a la derecha |
| `~` | bit a bit NOT (complemento de uno) (unario) |

### Bit a bit Y `&`\[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=2 "Editar sección: bit a bit AND &") \]

| un poco | poco b | `a & b`(a y B) |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

El operador AND bit a bit es un solo ampersand: `&`. Es solo una representación de AND que hace su trabajo en los bits de los operandos en lugar del valor de verdad de los operandos. El AND binario bit a bit realiza [la conjunción lógica](https://en.wikipedia.org/wiki/Logical_conjunction "Conjunción lógica") (que se muestra en la tabla anterior) de los bits en cada posición de un número en su forma binaria.

Por ejemplo, trabajando con un byte (el tipo char):

```
     11001000  
   & 10111000
     --------
   = 10001000

```

El [bit más significativo](https://en.wikipedia.org/wiki/Most_significant_bit "Parte más significante") del primer número es 1 y el del segundo número también es 1 por lo que el [bit](https://en.wikipedia.org/wiki/Bit "Poco") más significativo del resultado es 1; en el segundo bit más significativo, el bit del segundo número es cero, por lo que tenemos el resultado como 0. <sup id="cite_ref-cprogramming.com_2-0" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-cprogramming.com-2"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[2]</font></font></a></sup>

### Bit a bit O `|`\[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=3 "Sección de edición: bit a bit O |") \]

| un poco | poco b | un | b (a O b) |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

Similar a AND bit a bit, OR bit a bit realiza [una disyunción lógica](https://en.wikipedia.org/wiki/Logical_disjunction "disyunción lógica") a nivel de bit. Su resultado es un 1 si cualquiera de los bits es 1 y cero solo cuando ambos bits son 0. Su símbolo es `|`el que se puede llamar tubería.

```
      11001000  
    | 10111000
      --------
    = 11111000

```

<sup id="cite_ref-cprogramming.com_2-1" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-cprogramming.com-2"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[2]</font></font></a></sup>

### XOR bit a bit `^`\[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=4 "Editar sección: Bitwise XOR ^") \]

| un poco | poco b | `a ^ b`(a XOR b) |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

El bit a bit XOR (o exclusivo) realiza una [disyunción exclusiva](https://en.wikipedia.org/wiki/Exclusive_disjunction "disyunción exclusiva") , que es equivalente a sumar dos bits y descartar el acarreo. El resultado es cero solo cuando tenemos dos ceros o dos unos. <sup id="cite_ref-3" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-3"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[3]</font></font></a></sup> XOR se puede usar para alternar los bits entre 1 y 0. Por lo tanto, `i = i ^ 1`cuando se usa en un ciclo, alterna sus valores entre 1 y 0. <sup id="cite_ref-4" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-4"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[4]</font></font></a></sup>

```
      11001000  
    ^ 10111000
      --------
    = 01110000

```

## Operadores de desplazamiento \[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=5 "Sección de edición: Operadores de turno") \]

Hay dos operadores de desplazamiento bit a bit. Ellos son

-   Desplazamiento a la derecha ( `>>`)
-   Desplazamiento a la izquierda ( `<<`)

### Desplazamiento a la derecha `>>`\[ [editar](https://en.wikipedia.org/w/index.php?title=Bitwise_operations_in_C&action=edit&section=6 "Editar sección: Desplazamiento a la derecha >>") \]

El símbolo del operador de desplazamiento a la derecha es `>>`. Para su funcionamiento requiere de dos [operandos](https://en.wikipedia.org/wiki/Operand "operando") . Desplaza cada bit en su operando izquierdo a la derecha. El número que sigue al operador decide el número de lugares en los que se desplazan los bits (es decir, el operando derecho). Así, al hacerlo, `ch >> 3`todos los bits se desplazarán hacia la derecha tres lugares y así sucesivamente.

Sin embargo, tenga en cuenta que un valor de operando de desplazamiento que sea un número negativo o sea mayor o igual que el número total de bits en este valor da como resultado un [comportamiento indefinido](https://en.wikipedia.org/wiki/Undefined_behavior "Comportamiento indefinido") . Por ejemplo, al desplazar un entero sin signo de 32 bits, una cantidad de desplazamiento de 32 o superior no estaría definida.

Ejemplo:

Si la variable `ch`contiene el patrón de bits `11100101`, `ch >> 1`producirá el resultado `01110010`y `ch >> 2`producirá `00111001`.

Aquí se generan espacios en blanco simultáneamente a la izquierda cuando los bits se desplazan a la derecha. Cuando se realiza en un tipo sin signo o un valor no negativo en un tipo con signo, la operación realizada es un [desplazamiento lógico](https://en.wikipedia.org/wiki/Logical_shift "cambio lógico") , lo que hace que los espacios en blanco se llenen con `0`s (ceros). Cuando se realiza en un valor negativo en un tipo con signo, el resultado está técnicamente definido por la implementación (depende del compilador), <sup id="cite_ref-5" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-5"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[5]</font></font></a></sup> sin embargo, la mayoría de los compiladores realizarán un [cambio aritmético](https://en.wikipedia.org/wiki/Arithmetic_shift "cambio aritmético") , lo que hará que el espacio en blanco se llene con el bit de signo establecido del operando izquierdo .
