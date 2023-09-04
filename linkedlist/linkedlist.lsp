(defclass node ()
  ((data :accessor node-data :initarg :data)
   (next :accessor node-next :initarg :next :initform nil)))

(defun make-node (data &optional (next nil))
  (make-instance 'node :data data :next next))

(defun main ()
  (let ((head-node (make-node 10 (make-node 20 (make-node 30 (make-node 40 (make-node 50)))))))
    (format t "My Linked List:~%")

    (let ((first ""))
      (let ((temp-node head-node))
        (loop
         (unless temp-node
           (return))
         (setf first (concatenate 'string first (format nil "~a~t" (node-data temp-node))))
         (setf temp-node (node-next temp-node))))
      (format t "~a~%" first))))

(defun average-of-elements (head-node)
  (let ((count 0)
        (sum 0))
    (loop
     (unless head-node
       (return (/ sum count)))
     (incf count)
     (incf sum (node-data head-node))
     (setf head-node (node-next head-node)))))

(let ((head-node (make-node 10 (make-node 20 (make-node 30 (make-node 40 (make-node 50)))))))
  (main)
  (format t "The average is: ~a~%" (average-of-elements head-node)))
