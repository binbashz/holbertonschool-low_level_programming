## How to create static libraries?

To create a static library, we need to specify to the compiler, which is GCC in our case, that we want to compile all library codes (\*.c) into object files (\*.o) without linking. To do that we are going to use the command below.  

```
$ gcc -c -Wall -Werror -Wextra *.c
```

Enter fullscreen mode Exit fullscreen mode

Flags description:  
_\-c:_ Compile and assemble, but do not link.  
_\-Wall, -Werro and -Wextra:_ These aren’t necessary but they are recommended to generate better code.

Note that the "\*.c" matches all files in the current working directory with the ".c" extension.

For example, let us take two c files, **add.c**, and **mul.c** which make respectively the addition and the multiplication of two integers, and a header file that contains the prototypes of these functions. The picture below shows the output generated after using the command.

[![Alt Text](https://res.cloudinary.com/practicaldev/image/fetch/s--18K_LSB7--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/yy89ben4qfi9rkhrhgbg.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--18K_LSB7--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/yy89ben4qfi9rkhrhgbg.png)

Once we have object file(s), we can now bundle all object files into one static library.  
To create a static library or to add additional object files to an existing static library, we have to use the GNU [ar](https://man7.org/linux/man-pages/man1/ar.1.html) (archiver) program. We can use a command like this:  

```
$ ar -rc libname.a *.o
```

Enter fullscreen mode Exit fullscreen mode

This command creates a static library named "libname.a" and puts copies of the object files "add.o" and "mul.o" in it. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to insert object files or replace existing object files in the library, with the new object files.

After an archive is created or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library and to make sure that the order of the symbols in the library will not matter during compilation. There are two ways to create or update the index. The first one is, by using the command ranlib.  

```
$ ranlib libname.a
```

Enter fullscreen mode Exit fullscreen mode

or by adding an extra flag (_\-s_) to the ar command and it becomes like this:  

```
$ ar -rcs libname.a *.o
```

Enter fullscreen mode Exit fullscreen mode

The picture below shows the execution of these commands on our example.

[![Alt Text](https://res.cloudinary.com/practicaldev/image/fetch/s--Bf1JaGel--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/0e5y8j48w6lp32ngcfj7.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--Bf1JaGel--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/0e5y8j48w6lp32ngcfj7.png)

In order to list the names of the object files in our library, we can use the ar command with _\-t_ flag.

[![Alt Text](https://res.cloudinary.com/practicaldev/image/fetch/s--YnXHsb4A--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/nxbyboisyuz4zs00hu76.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--YnXHsb4A--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/nxbyboisyuz4zs00hu76.png)

## [](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b#how-to-use-them)How to use them?

Now our static library "libname.a" is ready to be used. we can use it in a program. This is done by adding the library's name to the object file(s) given to the linker. First, let us create a C source file that uses the above created static library.  
[![Alt Text](https://res.cloudinary.com/practicaldev/image/fetch/s--hP9I7Q2w--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/bznp3i15bozit478f1cc.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--hP9I7Q2w--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/bznp3i15bozit478f1cc.png)

Now we can use the command below to create our final executable program:  

```
$ gcc main.c -L. -lname -o main
```

Enter fullscreen mode Exit fullscreen mode

This will create a program using the object file "main.o", and any symbols it requires from the "name" static library.

Flags description:  
_\-L_ : Specifies the path to the given libraries ('.' referring to the current directory)  
_\-l_ : Specifies the library name without the "lib" prefix and the ".a" suffix, because the linker attaches these parts back to the name of the library to create a name of a file to look for.

All we have to do now is to run our program.

