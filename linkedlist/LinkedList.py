#!/usr/bin/env python3

class Node:
    def __init__ (self, data):
        self.data = data
        self.next = None
    def __init__ (self, data, next):
        self.data = data
        self.next = next

def main():

    headNode = Node(10, Node(20, Node(30, Node(40, Node(50, None)))))

    print("My linked list:")

    first = ''
    tempNode = headNode

    while tempNode != None:
        first = first+str(tempNode.data)+'\t'
        tempNode = tempNode.next

    print(first)

    print("The average of the elements: ", averageOfElements(headNode))

def averageOfElements(headNode):
    count = 0
    sum = 0

    while (headNode is not None):
        count += 1
        sum += headNode.data
        headNode = headNode.next

    average = sum / count
    return average

main()
