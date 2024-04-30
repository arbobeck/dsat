;Chapter 1 of "An Introduction to Programming in Emacs Lisp"

(prin1 "hello world")

;Lists and functions:

'(rose
  violet
  daisy
  buttercup)

'(this list has (a list inside of it))

()

'(this list includes "text between quotation marks.")

'(this list
  looks like this)

'(this list looks like this)

(+ 2 2)

(+ 2 (+ 3 3))

'(this is a quoted list)

;Error

(this is an unquoted list)

;Variables

fill-column

;Arguments

(concat "abc" "def")

(substring "The quick brown fox jumped." 16 19)

(+ 2 fill-column)

(concat "The " (number-to-string (+ 2 fill-column)) " red foxes.")

;+ = 0 and * = 1

(+)

(*)

(+ 3)

(* 3)

(+ 3 4 5)

(* 3 4 5)

;Error argument

(+ 2 'hello)

;The message function
;%s prints a number or any variable
;%d prints only numbers and only the number left of the decimal point

(message "This message appears in the echo area")

(message "The name of this buffer is: %s." (buffer-name))

(message "The value of fill-column is %d." fill-column)

(message "There are %d %s in the office!"
         (- fill-column 14) "pink elephants")

(message "He saw %d %s"
         (- fill-column 32)
         (concat "red "
                 (substring
                  "The quick brown foxes jumped." 16 21)
                 " leaping."))

;setq (set quote) and symbolic expressions
; one way of thinking of setq is as assigning values
; another way is as a pointer - the symbolic expression points to the list

(setq flowers '(rose violet daisy buttercup))

flowers

'flowers

(setq carnivores '(lion tiger leopard))

carnivores

(setq trees '(pine fir oak maple)
      herbivores '(gazelle antelope zebra))

trees
herbivores

;setq with numbers (counters, for instance)

(setq counter 0)

(setq counter (+ counter 1))

counter

(setq counter (+ counter 1))

counter

;Exercises:

;Generate an error message by evaulating an appropriate symbol that is not within parenthesis
this is an error
;Generate an error message by evaluating an appropriate symbol that is within parenthesis
(this is an error)
;Create a counter that increments by two rather than one
(setq counter 0)
(setq counter (+ counter 2))
counter
;Write an expression that prints a message in the echo area when evaluated
(message "This is a printed message")
