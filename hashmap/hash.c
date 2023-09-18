#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct KeyValuePair {
    char* key;
    int value;
};

struct Dictionary {
    struct KeyValuePair* pairs;
    int size;
};

struct Dictionary* initDictionary() {
    struct Dictionary* dict = (struct Dictionary*)malloc(sizeof(struct Dictionary));
    dict->size = 0;
    dict->pairs = NULL;
    return dict;
}

void addToDictionary(struct Dictionary* dict, const char* key, int value) {
    dict->size++;
    dict->pairs = (struct KeyValuePair*)realloc(dict->pairs, dict->size * sizeof(struct KeyValuePair));
    dict->pairs[dict->size - 1].key = strdup(key);
    dict->pairs[dict->size - 1].value = value;
}

int getFromDictionary(struct Dictionary* dict, const char* key) {
    for (int i = 0; i < dict->size; i++) {
        if (strcmp(dict->pairs[i].key, key) == 0) {
            return dict->pairs[i].value;
        }
    }
    return 0; // Return 0 if key is not found
}

void removeFromDictionary(struct Dictionary* dict, const char* key) {
    for (int i = 0; i < dict->size; i++) {
        if (strcmp(dict->pairs[i].key, key) == 0) {
            free(dict->pairs[i].key);
            for (int j = i; j < dict->size - 1; j++) {
                dict->pairs[j] = dict->pairs[j + 1];
            }
            dict->size--;
            dict->pairs = (struct KeyValuePair*)realloc(dict->pairs, dict->size * sizeof(struct KeyValuePair));
            break;
        }
    }
}

void freeDictionary(struct Dictionary* dict) {
    for (int i = 0; i < dict->size; i++) {
        free(dict->pairs[i].key);
    }
    free(dict->pairs);
    free(dict);
}

int main() {
    struct Dictionary* my_dict = initDictionary();

    addToDictionary(my_dict, "Raspberry", 3);
    addToDictionary(my_dict, "Pi", 5);
    addToDictionary(my_dict, "Orange", 2);
    addToDictionary(my_dict, "Banana", 4);

    printf("Value for 'Raspberry': %d\n", getFromDictionary(my_dict, "Raspberry"));
    printf("Value for 'Pi': %d\n", getFromDictionary(my_dict, "Pi"));

    addToDictionary(my_dict, "Raspberry", 6);

    if (getFromDictionary(my_dict, "Banana") != 0) {
        printf("Banana exists in the dictionary\n");
    }

    removeFromDictionary(my_dict, "Orange");
    removeFromDictionary(my_dict, "Raspberry");

    printf("Keys in the dictionary:\n");
    for (int i = 0; i < my_dict->size; i++) {
        printf("%s\n", my_dict->pairs[i].key);
    }

    printf("Values in the dictionary:\n");
    for (int i = 0; i < my_dict->size; i++) {
        printf("%d\n", my_dict->pairs[i].value);
    }

    printf("Key-Value pairs in the dictionary:\n");
    for (int i = 0; i < my_dict->size; i++) {
        printf("%s: %d\n", my_dict->pairs[i].key, my_dict->pairs[i].value);
    }

    freeDictionary(my_dict);

    return 0;
}
