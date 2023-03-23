
/**
  * print_name - prints a name.
  * @name: string which is the name.
  * @f: f un
  *
  */

void print_name(char *name, void (*f)(char *)) 
{
    (*f)(name);
}
