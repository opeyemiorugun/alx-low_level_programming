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
};
/**
 * parameters -typedef for struct dog
 */
typedef struct dog parameter;
	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
