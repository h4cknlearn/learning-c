/* exemplo de if...else aninhados */

if (grade >= 90) {
	puts("A");
} // end if
else if (grade >= 80) {
	puts("B");
} // end else if
else if (grade >= 70) {
	puts("C");
} // end else if
else if (grade >= 60) {
	puts("D");
} // end else if
else {
	puts("F");
} // end els

/* avoids deep indentation of the code to the right
 * such indentation often leaves little room on a line, forcing
 * lines to be split and decreasing program readability */

// compound statement

if (grade >= 60) {
	puts("Passed");
} // end if
else {
	puts("Failed.");
	puts("You must take this course again");
} // end else
