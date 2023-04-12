
### Working on bytes
, or data types comprising of bytes like ints, floats, doubles or even data structures which stores large amount of bytes is normal for a programmer. In some cases, a programmer needs to go beyond this - that is to say that in a deeper level where the importance of bits is realized.

Operations with bits are used in Data compression (data is compressed by converting it from one representation to another, to reduce the space) ,Exclusive-Or Encryption (an algorithm to encrypt the data for safety issues). In order to encode, decode or compress files we have to extract the data at bit level. Bitwise Operations are faster and closer to the system and sometimes optimize the program to a good level.

We all know that 1 byte comprises of 8 bits and any integer or character can be represented using bits in computers, which we call its binary form(contains only 1 or 0) or in its base 2 form. Example:

14 = {1110 }2 = 1 * 23 + 1 * 22 + 1 * 21 + 0 * 20 = 14.

20 = {10100 }2 = 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 0 * 20 = 20.

For characters, we use ASCII representation, which are in the form of integers which again can be represented using bits as explained above.

Bitwise Operators:

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:

NOT ( ~ ): Bitwise NOT is an unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the one’s complement of a number. Lets take an example. N = 5 = (101)2 ~N = ~5 = ~(101)2 = (010)2 = 2

AND ( & ): Bitwise AND is a binary operator that operates on two equal-length bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0. A = 5 = (101)2 , B = 3 = (011)2 A & B = (101)2 & (011)2= (001)2 = 1

OR ( | ): Bitwise OR is also a binary operator that operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1. A = 5 = (101)2 , B = 3 = (011)2 A | B = (101)2 | (011)2 = (111)2 = 7

XOR ( ^ ): Bitwise XOR also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1. A = 5 = (101)2 , B = 3 = (011)2 A ^ B = (101)2 ^ (011)2 = (110)2 = 6

Left Shift ( << ): Left shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with ( if we are shifting k bits ). 1 << 1 = 2 = 21 1 << 2 = 4 = 22 1 << 3 = 8 = 23 1 << 4 = 16 = 24 … 1 << n = 2n

Right Shift ( >> ): Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ). 4 >> 1 = 2 6 >> 1 = 3 5 >> 1 = 2 16 >> 4 = 1

enter image description here

Bitwise operators are good for saving space and sometimes to cleverly remove dependencies.

Note: All left and right side taken in this article, are taken with reference to the reader.

Lets discuss some algorithms based on bitwise operations:

How to check if a given number is a power of 2 ? Consider a number N and you need to find if N is a power of 2. Simple solution to this problem is to repeated divide N by 2 if N is even. If we end up with a 1 then N is power of 2, otherwise not. There are a special case also. If N = 0 then it is not a power of 2. Let’s code it.
Implementation:

bool isPowerOfTwo(int x) { if(x == 0) return false; else { while(x % 2 == 0) x /= 2; return (x == 1); } } Above function will return true if x is a power of 2, otherwise false. Time complexity of the above code is O(logN).

The same problem can be solved using bit manipulation. Consider a number x that we need to check for being a power for 2. Now think about the binary representation of (x-1). (x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1. Let, x = 4 = (100)2 x - 1 = 3 = (011)2 Let, x = 6 = (110)2 x - 1 = 5 = (101)2

It might not seem obvious with these examples, but binary representation of (x-1) can be obtained by simply flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1.

Now think about x & (x-1). x & (x-1) will have all the bits equal to the x except for the rightmost 1 in x. Let, x = 4 = (100)2 x - 1 = 3 = (011)2 x & (x-1) = 4 & 3 = (100)2 & (011)2 = (000)2 Let, x = 6 = (110)2 x - 1 = 5 = (101)2 x & (x-1) = 6 & 5 = (110)2 & (101)2 = (100)2

Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation. If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.

Implementation:

bool isPowerOfTwo(int x) { // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not return (x && !(x & (x - 1))); } 2) Count the number of ones in the binary representation of the given number.

The basic approach to evaluate the binary form of a number is to traverse on it and count the number of ones. But this approach takes log2N of time in every case.




---------------------------------------------------------------------------------------------------------------

# Operaciones bit a bit en C



Operations transforming individual bits of integral data types

En el [lenguaje de programación C](https://en.wikipedia.org/wiki/C_(programming_language) "C (lenguaje de programación)") , las operaciones se pueden realizar a [nivel de bit](https://en.wikipedia.org/wiki/Bit "Poco") usando [operadores bit a bit](https://en.wikipedia.org/wiki/Bitwise_operation "Operación bit a bit") .

Las operaciones bit a bit se contrastan con las operaciones [a nivel de byte](https://en.wikipedia.org/wiki/Byte "Byte") que caracterizan las contrapartes lógicas de los operadores bit a bit, los operadores AND, OR, NOT. En lugar de actuar en bits individuales, los operadores de nivel de byte funcionan en cadenas de ocho bits (conocidos como bytes) a la vez. La razón de esto es que un byte es normalmente la unidad más pequeña de memoria direccionable (es decir, datos con una [dirección de memoria](https://en.wikipedia.org/wiki/Memory_address "Dirección de memoria") única ).

Esto también se aplica a los operadores bit a bit, lo que significa que aunque operan solo en un bit a la vez, no pueden aceptar nada más pequeño que un byte como entrada.

Todos estos operadores también están disponibles en [C++](https://en.wikipedia.org/wiki/C%2B%2B "C++") y muchos lenguajes [de la familia C.](https://en.wikipedia.org/wiki/C-family "familia C")

## Operadores bit a bit 

C proporciona seis [operadores](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B "Operadores en C y C++") para [la manipulación de bits](https://en.wikipedia.org/wiki/Bit_manipulation "Manipulación de bits") . <sup id="cite_ref-k&amp;r2e_1-0" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-k&amp;r2e-1"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[1]</font></font></a></sup>

| Símbolo | Operador |
| --- | --- |
| `&` | bit a bit Y |
| `|` | bit a bit inclusivo O |
| `^` | XOR bit a bit (OR exclusivo) |
| `<<` | Shift izquierdo |
| `>>` | Giro a la derecha |
| `~` | bit a bit NOT (complemento de uno) (unario) |

### Bit a bit Y `&`

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

### Bit a bit O `|`

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



### XOR bit a bit `^`

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

## Operadores de desplazamiento 

Hay dos operadores de desplazamiento bit a bit. Ellos son

-   Desplazamiento a la derecha ( `>>`)
-   Desplazamiento a la izquierda ( `<<`)

### Desplazamiento a la derecha `>>`

El símbolo del operador de desplazamiento a la derecha es `>>`. Para su funcionamiento requiere de dos [operandos](https://en.wikipedia.org/wiki/Operand "operando") . Desplaza cada bit en su operando izquierdo a la derecha. El número que sigue al operador decide el número de lugares en los que se desplazan los bits (es decir, el operando derecho). Así, al hacerlo, `ch >> 3`todos los bits se desplazarán hacia la derecha tres lugares y así sucesivamente.

Sin embargo, tenga en cuenta que un valor de operando de desplazamiento que sea un número negativo o sea mayor o igual que el número total de bits en este valor da como resultado un [comportamiento indefinido](https://en.wikipedia.org/wiki/Undefined_behavior "Comportamiento indefinido") . Por ejemplo, al desplazar un entero sin signo de 32 bits, una cantidad de desplazamiento de 32 o superior no estaría definida.

Ejemplo:

Si la variable `ch`contiene el patrón de bits `11100101`, `ch >> 1`producirá el resultado `01110010`y `ch >> 2`producirá `00111001`.

Aquí se generan espacios en blanco simultáneamente a la izquierda cuando los bits se desplazan a la derecha. Cuando se realiza en un tipo sin signo o un valor no negativo en un tipo con signo, la operación realizada es un [desplazamiento lógico](https://en.wikipedia.org/wiki/Logical_shift "cambio lógico") , lo que hace que los espacios en blanco se llenen con `0`s (ceros). Cuando se realiza en un valor negativo en un tipo con signo, el resultado está técnicamente definido por la implementación (depende del compilador), <sup id="cite_ref-5" class="reference"><a href="https://en.wikipedia.org/wiki/Bitwise_operations_in_C#cite_note-5"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[5]</font></font></a></sup> sin embargo, la mayoría de los compiladores realizarán un [cambio aritmético](https://en.wikipedia.org/wiki/Arithmetic_shift "cambio aritmético") , lo que hará que el espacio en blanco se llene con el bit de signo establecido del operando izquierdo .
