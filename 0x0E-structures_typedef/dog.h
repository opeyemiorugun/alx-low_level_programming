#ifndef dogstruct
#define dogstruct
/**
 * struct dog -short description
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
