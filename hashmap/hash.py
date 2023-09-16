
my_dict = {}

my_dict['Raspberry'] = 3
my_dict['Pi'] = 5
my_dict.update({'Orange': 2, 'Banana': 4})

print("Value for 'Raspberry':", my_dict['Raspberry'])  # Output: Value for 'apple': 3
print("Value for 'Pi':", my_dict['Pi'])  # Output: Value for 'cherry': 2

my_dict['Raspberry'] = 6

if 'Banana' in my_dict:
    print("Banana exists in the hashmap")

del my_dict['Orange']
my_dict.pop('Raspberry', None)

print("Keys in the hashmap:")
for key in my_dict:
    print(key)

print("Values in the hashmap:")
for value in my_dict.values():
    print(value)

print("Key-Value pairs in the hashmap:")
for key, value in my_dict.items():
    print(f"{key}: {value}")
