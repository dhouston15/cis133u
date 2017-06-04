/* Solution to Programming Project 6 (Chapter 16)
 *
 * From C PROGRAMMING: A MODERN APPROACH (Second Edition)
 *
 * Copyright (c) 2008 W. W. Norton & Company
 * All rights reserved.
 *
 * This program may be freely distributed for class use,
 * provided that this copyright notice is retained.
 */

/* 
 * Name: Dave Houston
 * Assignment: Structs Lab
 * Date Written: 2017-June-3
 * Course: CIS 133U
 * Program: compare_dates.c
 * Purpose: This program will collect and compare two dates, displaying which is before the other.
 * Sources: provided template, me
 */

#include <stdio.h>

/* Note: Program assumes years are in the same century. */

struct date {
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2);
void put_date(struct date d);

int main(void)
{
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    if (compare_dates(d1, d2) < 0) {
        put_date(d1);
        printf(" is earlier than ");
        put_date(d2);
        printf("\n");
    } else {
        put_date(d2);
        printf(" is earlier than ");
        put_date(d1);
        printf("\n");
    }

    return 0;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year != d2.year)
        return d1.year < d2.year ? -1 : 1;
    if (d1.month != d2.month)
        return d1.month < d2.month ? -1 : 1;
    if (d1.day != d2.day)
        return d1.day < d2.day ? -1 : 1;

    return 0;
}

void put_date(struct date d)
{
    printf("%.2d/%.2d/%.2d", d.month, d.day, d.year);
}
