# Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()

Improve Article

Save Article

Like Article

-   Difficulty Level : [Easy](https://www.geeksforgeeks.org/easy/)
-   Last Updated : 23 Dec, 2022

-   Read
-   Discuss
-   Courses
-   Practice
-   Video

Improve Article

Save Article

$('#practice-tab-main').show(),$('#video-tab-main').show(),$('#courses-tab-main').show(),companyTagsArray=JSON.parse('\[\]'),categoryTagsArray=JSON.parse('\[\]')

Since C is a structured language, it has some fixed rules for programming. One of them includes changing the size of an array. An array is a collection of items stored at contiguous memory locations. 

![arrays](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2015/05/Arrays.png)

As it can be seen that the length (size) of the array above made is 9. But what if there is a requirement to change this length (size). For Example, 

-   If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.
-   Take another situation. In this, there is an array of 9 elements with all 9 indices filled. But there is a need to enter 3 more elements in this array. In this case, 3 indices more are required. So the length (size) of the array needs to be changed from 9 to 12.

This procedure is referred to as **Dynamic Memory Allocation in C**.  
Therefore, C **Dynamic Memory Allocation** can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.  
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under **<stdlib.h>** header file to facilitate dynamic memory allocation in C programming. They are: 

<iframe id="google_ads_iframe_/27823234/GFG_InContent_Desktop_728x280_0" name="google_ads_iframe_/27823234/GFG_InContent_Desktop_728x280_0" title="3rd party ad content" width="728" height="280" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" role="region" aria-label="Advertisement" tabindex="0" style="border: 0px; vertical-align: bottom;" data-load-complete="true" data-google-container-id="1"></iframe>

1.  malloc()
2.  calloc()
3.  free()
4.  realloc()

Let’s look at each of them in greater detail.

### C malloc() method

The **“malloc”** or **“memory allocation”** method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

**Syntax:** 

```
ptr = (cast-type*) malloc(byte-size)
For Example:
```

> **ptr = (int\*) malloc(100 \* sizeof(int));**  
> Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.  
>  

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png)

If space is insufficient, allocation fails and returns a NULL pointer.

**Example:** 

-   C

## C

  

  
  

<table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="preprocessor">#include &lt;stdio.h&gt;</code></div><div class="line number2 index1 alt1"><code class="preprocessor">#include &lt;stdlib.h&gt;</code></div><div class="line number3 index2 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number4 index3 alt1"><code class="color1 bold">int</code> <code class="plain">main()</code></div><div class="line number5 index4 alt2"><code class="plain">{</code></div><div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number7 index6 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// This pointer will hold the</code></div><div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// base address of the block created</code></div><div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code><code class="plain">* ptr;</code></div><div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">n, i;</code></div><div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Get the number of elements for the array</code></div><div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"Enter number of elements:"</code><code class="plain">);</code></div><div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">scanf</code><code class="plain">(</code><code class="string">"%d"</code><code class="plain">,&amp;n);</code></div><div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"Entered number of elements: %d\n"</code><code class="plain">, n);</code></div><div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Dynamically allocate memory using malloc()</code></div><div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">ptr = (</code><code class="color1 bold">int</code><code class="plain">*)</code><code class="functions bold">malloc</code><code class="plain">(n * </code><code class="keyword bold">sizeof</code><code class="plain">(</code><code class="color1 bold">int</code><code class="plain">));</code></div><div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Check if the memory has been successfully</code></div><div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// allocated by malloc or not</code></div><div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">if</code> <code class="plain">(ptr == NULL) {</code></div><div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"Memory not allocated.\n"</code><code class="plain">);</code></div><div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">exit</code><code class="plain">(0);</code></div><div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">}</code></div><div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">else</code> <code class="plain">{</code></div><div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Memory has been successfully allocated</code></div><div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"Memory successfully allocated using malloc.\n"</code><code class="plain">);</code></div><div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Get the elements of the array</code></div><div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">for</code> <code class="plain">(i = 0; i &lt; n; ++i) {</code></div><div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">ptr[i] = i + 1;</code></div><div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">}</code></div><div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Print the elements of the array</code></div><div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"The elements of the array are: "</code><code class="plain">);</code></div><div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">for</code> <code class="plain">(i = 0; i &lt; n; ++i) {</code></div><div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions bold">printf</code><code class="plain">(</code><code class="string">"%d, "</code><code class="plain">, ptr[i]);</code></div><div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">}</code></div><div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">}</code></div><div class="line number42 index41 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div><div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">return</code> <code class="plain">0;</code></div><div class="line number44 index43 alt1"><code class="plain">}</code></div></div></td></tr></tbody></table>

**Output:** 

```
Enter number of elements: 5
Memory successfully allocated using malloc.
The elements of the array are: 1, 2, 3, 4, 5
```
