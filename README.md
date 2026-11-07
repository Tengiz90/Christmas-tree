# Christmas tree - a problem from SPOJ

Print the Christmas tree of a given height using the character `^`, as shown in the following examples.

---

## Input

There is given one integer $n$ in the input, where $1 \le n \le 25$.

---

## Output

Print the tree of height $n$ using the character `^`, where by height we mean the number of triangles with growing sizes, as shown in the following examples. Note that the last line is the longest one, and the first character starts from the first position in the line.

---

## Examples

### Input 1
```text
1
```

### Output 1
```text
 ^^ 
^^^^
```

---

### Input 2
```text
2
```

### Output 2
```text
   ^^ 
  ^^^^
   ^^   
  ^^^^  
 ^ ^^ ^ 
^^^^^^^^
```

---

### Input 3
```text
3
```

### Output 3
```text
     ^^ 
    ^^^^
     ^^   
    ^^^^  
   ^ ^^ ^ 
  ^^^^^^^^
     ^^     
    ^^^^    
   ^ ^^ ^   
  ^  ^^  ^  
 ^   ^^   ^ 
^^^^^^^^^^^^
```
