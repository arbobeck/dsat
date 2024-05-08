; Chapter Two: Lisp Data Types

; Printed Representation and Read Syntax

(current-buffer)

; evaluating that (C-x C-e) will return #<buffer ch2.el>
; every data type has a unique printed representation
; most of the time, an object's printed representation also has a read syntax for the object
; but (current-buffer) above is an exception - there is no read syntax because it makes no sense to enter this type of object as constants in a lisp program
; so instead it returns 'hash notation'

; Integer
; there are actually two types of integers - fixnums (small numbers) & bignums (large integers)
-1
1
1.
+1
; Floating-Point
; the following all equal a floating point number with a value of 1500
1500.0
+15e2
15.0e+2
+1500000e-3
.15e4
; Character
; characters are actually integers
; the usual read syntax for characters is a question mark followed by the character
?Q
?q
; there are also ways to express things like backspace, tab, del, etc
?\t     ;tab
?\s     ;space
?\d     ;delete
; there are also ways to express unicode characters (like accent grave)
; Symbol

; Sequence

; Cons Cell and List

; Array

; String

; Vector

; Char-Table

; Bool-Vector

; Hash Table

; Function

; Macro

; Primitive Function

; Byte-Code Function

; Record

; Type-Descriptors

; Autoload

; Finalizer
