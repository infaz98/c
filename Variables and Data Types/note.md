## Variables and Data types in C   
<br>
<ul>
<li>c is a <b>case sensitive</b> langauage  </li>  
<br>
<li>Identifier is the name that you provide for the:</li>  
<ul><li>enumerations, structures, union, typedef, function, variables, arrays</li> </ul>
<li>Rules for writing a variable in C  </li>
<ul>
<li>Must begin with letter or underscore</li>
<li>Declaring variables with special characters will give you compile error</li>
</ul>
</ul>

### Data types  
<br>
<ul>
<li>There are main three data types available in C</li>
<ul>
<li><b>Primitive</b> : char, int, float, double</li>
<li><b>Derivied</b>: Array, Pointer, Function</li>
<li><b>User defined</b>: enum, Structure, Union</li>
</ul>
</ul>  

<br>

| DATA TYPE              | MEMORY (BYTES) | RANGE                           | FORMAT SPECIFIER |
|------------------------|----------------|---------------------------------|------------------|
| short int              | 2              | -32,768 to 32,767               | %hd              |
| unsigned short int     | 2              | 0 to 65,535                     | %hu              |
| unsigned int           | 4              | 0 to 4,294,967,295              | %u               |
| int                    | 4              | -2,147,483,648 to 2,147,483,647 | %d               |
| long int               | 8              | -2,147,483,648 to 2,147,483,647 | %ld              |
| unsigned long int      | 8              | 0 to 4,294,967,295              | %lu              |
| long long int          | 8              | -(2^63) to (2^63)-1             | %lld             |
| unsigned long long int | 8              | 0 to 18,446,744,073,709,551,615 | %llu             |
| signed char            | 1              | -128 to 127                     | %c               |
| unsigned char          | 1              | 0 to 255                        | %c               |
| float                  | 4              |                                 | %f               |
| double                 | 8              |                                 | %lf              |
| long double            | 16             |                                 | %Lf              |  

<br>  

### Formatting Character:  
  
The character that immediately follows the percent sign specifies what type of value is to be displayed at that point. In the preceding program  
~~~
printf ("The sum of 50 and 25 is %i \n",sum);
~~~   
Multiple variable formating   
~~~
printf ("Value 1: %i, Value 2: %i, Value 3: %i  \n",val1,val2,val3);
~~~   

### Assigning values to variables: 
~~~
//variable declaration
int value1;

//variable initialization
value1 = 10;
~~~   

Assigning user input to variables 
~~~
int number;
printf("Type in a number : ");
scanf("%i", &number);
~~~   

scanf function takes two arguments which are:
    <ol>
    <li>type of the data which is expected</li>
    <li>memory location associated with the variable</li>
    </ol>

### Format Modifiers   
<br>

| Modifier | Description                                                                    |
|----------|--------------------------------------------------------------------------------|
| %d , %i  | Print as decimal integer.                                                      |
| %6d      | Print as decimal integer, at least six characters wide.                        |
| %f       | Print as floating point.                                                       |
| %6f      | Print as floating point, at least six characters wide.                         |
| %.2f     | Print as floating point, 2 characters after decimal point.                     |
| %6.2f    | Print as floating point, at least 6 wide and 2 characters after decimal point. |
| %-4s     | Print as four character string with left justified.                            |
| %4s      | Print as four character string with right justified.                           |