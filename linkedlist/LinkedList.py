#!/usr/bin/env python3

class Node:
    def __init__ (self, data, next):
        self.data = data
        self.next = next

def main():

    headNode = Node(10, Node(20, Node(30, Node(40, Node(50, None)))))

    print("My linked list: ")

    first = ''
    tempNode = headNode

    while tempNode != None:
        first = first+str(tempNode.data)+'\t'
        tempNode = tempNode.next

    print(first)

    print("The average of the elements: ", averageOfElements(headNode))
    print("The first node of the Linked List: ", firstNode(headNode))
    print("The last node of the Linked List: ", getLastNode(headNode))

def averageOfElements(headNode):
    count = 0
    sum = 0

    while (headNode is not None):
        count += 1
        sum += headNode.data
        headNode = headNode.next

    average = sum / count
    return average

def firstNode(headNode):
    first_node = headNode.data

    return first_node

def getLastNode(headNode):
    currentNode = headNode

    while currentNode.next != None:
        currentNode = currentNode.next

    return currentNode.data

main()
