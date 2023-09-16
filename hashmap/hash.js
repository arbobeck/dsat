let my_dict = {};

my_dict['Raspberry'] = 3;
my_dict['Pi'] = 5;
my_dict['Orange'] = 2;
my_dict['Banana'] = 4;

console.log("Value for 'Raspberry':", my_dict['Raspberry']);
console.log("Value for 'Pi':", my_dict['Pi']);

my_dict['Raspberry'] = 6;

if ('Banana' in my_dict) {
    console.log("Banana exists in the hashmap");
}

delete my_dict['Orange'];
delete my_dict['Raspberry'];

console.log("Keys in the hashmap:");
for (let key in my_dict) {
    console.log(key);
}

console.log("Values in the hashmap:");
for (let key in my_dict) {
    console.log(my_dict[key]);
}

console.log("Key-Value pairs in the hashmap:");
for (let key in my_dict) {
    console.log(key + ": " + my_dict[key]);
}
