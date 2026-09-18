#include <stdio.h>
#include <string.h>
struct Book
{
    char name[51];
    int took;
};

void searchBook(struct Book *books, int size)
{
    getchar();

    int find = 0;
    while (find == 0)
    {
        printf("Enter Book Name: ");
        char inp[50];
        fgets(inp, 50, stdin);
        inp[strcspn(inp, "\n")] = '\0';

        for (int i = 0; i < size; i++)
        {
            if (strcmp(inp, books[i].name) == 0)
            {
                if (books[i].took == 1)
                {
                    printf("\nBook already taken!\n");
                    find = 1;
                    continue;
                }
                printf("\nBook Found!\n");
                find = 1;
                books[i].took = 1;
            }
        }
        if (!find)
        {
            printf("\nBook Not Found!\n");
        }
    }
}

void dropBook(struct Book *books, int size)
{
    getchar();
    int find = 0;
    while (find == 0)
    {
        printf("Enter Book Name: ");

        char inp[50];
        fgets(inp, 50, stdin);
        inp[strcspn(inp, "\n")] = '\0';

        for (int i = 0; i < size; i++)
        {
            if (strcmp(inp, books[i].name) == 0)
            {
                if (books[i].took == 1)
                {
                    printf("\nBook dropped succesfully\n");
                    books[i].took = 0;
                }
                else
                {
                    printf("\n The book is already in library \n");
                }
                find = 1;
            }
        }
        if (!find)
        {
            printf("\nBook Not Found!\n");
        }
    }
}

void showFreeBooks(struct Book *books, int size)
{
    printf("\nAvalaible books are as follows: \n");
    for (int i = 0; i < size; i++)
    {
        if (books[i].took == 0)
        {
            printf("%d-) %s\n", i + 1, books[i].name);
        }
    }
}
int selectProcess(void)
{
    int process = -1;
    while (!(process == 1 || process == 2 || process == 3 || process == 4))
    {
        printf("\n\nWelcome Library Book Check Sytsem !\n\nPlease Select The Process:"
               "\n1-)Take Book\n2-)Drop Book\n3-)Show Avalaible Books\n4-)Quit\n\n");
        scanf("%d", &process);

        if (!(process == 1 || process == 2 || process == 3 || process == 4))
        {
            printf("Error , please be sure that enter accurate number!\n");
        }
    }
    return process;
}

int main(void)
{
    struct Book books[4];
    strcpy(books[0].name, "Crime and Punishment");
    books[0].took = 0;
    strcpy(books[1].name, "1984");
    books[1].took = 1;
    strcpy(books[2].name, "The Alchemist");
    books[2].took = 0;
    strcpy(books[3].name, "The Metamorphosis");
    books[3].took = 0;

    int size = 4;
    int process = -1;
    while (!(process == 4))
    {
        process = selectProcess();
        switch (process)
        {
        case 1:
            searchBook(books, size);
            break;
        case 2:
            dropBook(books, size);
            break;
        case 3:
            showFreeBooks(books, size);
            break;
        case 4:
            break;
        }
    }
    return 0;
}