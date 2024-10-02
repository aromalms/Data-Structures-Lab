#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int exp;
    struct node *next;
};

void read(struct node **poly) {
    int coeff, exp, n;
    struct node *temp = NULL, *last = NULL;

    do {
        temp = (struct node *)malloc(sizeof(struct node));

        printf("Enter the coefficient: ");
        scanf("%d", &coeff);
        printf("Enter the exponent: ");
        scanf("%d", &exp);

        temp->coeff = coeff;
        temp->exp = exp;
        temp->next = NULL;

        if (*poly == NULL) {
            *poly = temp;
            last = temp;
        } else {
            last->next = temp;
            last = temp;
        }

        printf("Do you want to add more terms?\n1. Yes\n2. No\n");
        scanf("%d", &n);

    } while (n != 2);
}

void display(struct node *poly) {

    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

void add(struct node *first, struct node *second, struct node **result) {
    struct node *temp = NULL;
    *result = NULL;

    while (first && second) {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = NULL;

        if (*result == NULL) {
            *result = temp;
        } else {
            temp->next = *result;
            *result = temp;
        }

        if (first->exp > second->exp) {
            temp->coeff = first->coeff;
            temp->exp = first->exp;
            first = first->next;
        } else if (first->exp < second->exp) {
            temp->coeff = second->coeff;
            temp->exp = second->exp;
            second = second->next;
        } else {
            temp->exp = first->exp;
            temp->coeff = first->coeff + second->coeff;
            first = first->next;
            second = second->next;
        }
    }

    while (first || second) {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = NULL;

        if (*result == NULL) {
            *result = temp;
        } else {
            temp->next = *result;
            *result = temp;
        }

        if (first) {
            temp->coeff = first->coeff;
            temp->exp = first->exp;
            first = first->next;
        } else if (second) {
            temp->coeff = second->coeff;
            temp->exp = second->exp;
            second = second->next;
        }
    }
}

void freeList(struct node *list) {
    struct node *temp;
    while (list != NULL) {
        temp = list;
        list = list->next;
        free(temp);
    }
}

int main() {
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *result = NULL;

    printf("For the first polynomial:\n");
    read(&first);

    printf("For the second polynomial:\n");
    read(&second);

    add(first, second, &result);

    printf("First polynomial: ");
    display(first);

    printf("Second polynomial: ");
    display(second);

    printf("Resultant polynomial after addition: ");
    display(result);

    // Free allocated memory
    freeList(first);
    freeList(second);
    freeList(result);

    return 0;
}
