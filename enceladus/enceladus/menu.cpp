#include "menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{
	 Math = {200, 300, 275, 75};
	 English = {900, 300, 275, 75};
	 Biology = { 150, 600, 400, 75 };
	 Chemistry = { 850, 600, 400, 75 };
	 Exit = {1300, 900, 200, 50 };
	 Return = {1000, 900, 200, 50 };
	 Testbutton = { 700, 900, 200, 75 };
	 Lesson1 = {200, 200, 275, 75 };
	 Lesson2 = { 1000, 200, 275, 75 };
	 Lesson3 = { 200, 500, 275, 75 };
	 Lesson4 = { 1000, 500, 275, 75 };
	 Lesson5 = { 200, 800, 275, 75 };
	 Lesson6 = { 1000, 800, 275, 75 };
	 initialiseTests();
}

void Menu::Draw(int appState, int lessonState, bool testState)
{
	DrawRectangleRec(Exit, BLACK);
	DrawText("Exit", 1350, 900, 50, WHITE);
	DrawRectangleLinesEx({ 0, 900, 1500, 50, }, 3, BLACK);

	switch (appState)
	{
	case 1:
	DrawText("E-Learn", 550, 10, 100, WHITE);
	DrawText("Coose Your Subject", 400, 100, 75, WHITE);
	DrawRectangleRec(Math, BLACK);
	
	DrawText("Math", 245, 300, 75, WHITE);
	DrawRectangleRec(English, BLACK);
	DrawText("English", 910, 300, 75, WHITE);
	DrawRectangleRec(Biology, BLACK);
	DrawText("Biology", 220, 600, 75, WHITE);
	DrawRectangleRec(Chemistry, BLACK);
	DrawText("Chemistry", 865, 600, 75, WHITE);
	
	break;
	case 2:
		if (lessonState != 0)
		{
			DrawRectangleRec(Testbutton, BLACK);
			DrawText("Test", 730, 900, 50, WHITE);
		}
		switch (lessonState)
		{
		case 0:
			DrawText("Subject: Math", 425, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Algebra - Solving Quadratic Equations", 125, 0, 65, BLACK);
			DrawText("Quadratic equations have the form:", 10, 100, 50, WHITE);
			DrawText("ax2 + bx + c = 0", 225, 175, 50, WHITE);
			DrawText("where a, b, and c are constants, and a /= 0.", 10, 250, 50, WHITE);
			DrawText("Example:", 10, 350, 50, WHITE);
			DrawText("Solve x2 - 5x + 6 = 0", 10, 450, 50, WHITE);
			DrawText("1. Factor: (x - 2)(x - 3) = 0", 10, 550, 50, WHITE);
			DrawText("2. Solve for x:", 10, 650, 50, WHITE);
			DrawText("x - 2 = 0 -> x = 2", 10, 750, 50, WHITE);
			DrawText("x - 3 = 0 -> x = 3", 10, 850, 50, WHITE);
			if (testState)
			{
				MathTest[0].Draw();
			}
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Geometry - Triangles", 165, 0, 65, BLACK);
			DrawText("A triangle is a three-sided polygon with the sum", 10, 100, 50, WHITE);
			DrawText("of its interior angles always 180 degrees.", 10, 175, 50, WHITE);
			DrawText("Types of triangles by sides:", 10, 250, 50, WHITE);
			DrawText("Acute triangle: All angles < 90°", 225, 325, 50, WHITE);
			DrawText("Right triangle: One angle = 90°", 225, 400, 50, WHITE);
			DrawText("Obtuse triangle: One angle > 90°", 225, 475, 50, WHITE);
			DrawText("Pythagoras' Theorem (for right-angled triangles)", 10, 550, 50, WHITE);
			DrawText("a2 + b2 = c2", 225, 625, 50, WHITE);
			if (testState)
			{
				MathTest[1].Draw();
			}
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Functions and Graphs", 165, 0, 65, BLACK);
			DrawText("A function is a special relationship where each input", 10, 175, 50, WHITE);
			DrawText("(x) has exactly one output (y).", 10, 250, 50, WHITE);
			DrawText("It is written as f(x), meaning 'f is a function of x. '", 10, 325, 50, WHITE);
			DrawText("f(x)=2x+3", 225, 400, 50, WHITE);
			DrawText("if x = 1, then f(1) = 2 * 1 + 3 = 5", 225, 475, 50, WHITE);

			if (testState)
			{
				MathTest[2].Draw();
			}
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Polynomials and Factoring", 165, 0, 65, BLACK);
			DrawText("A polynomial is an algebraic expression made up of terms", 10, 100, 50, WHITE);
			DrawText("consisting of variables,coefficients, and exponents", 10, 175, 50, WHITE);
			DrawText("combined using addition, subtraction, and multiplication.", 10, 250, 50, WHITE);
			DrawText("Example:", 10, 325, 50, WHITE);
			DrawText("P(x) = 3x2 - 5x2 + 2x - 7", 225, 400, 50, WHITE);
			DrawText("Degree of a polynomial: The highest exponent of the variable.", 10, 475, 50, WHITE);
			DrawText("Example: ", 10, 525, 50, WHITE);
			DrawText("4x5 - 3x2+ 2 has a degree of 5", 225, 600, 50, WHITE);
			if (testState)
			{
				MathTest[3].Draw();
			}
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Algebraic Expressions and Identities.", 165, 0, 65, BLACK);
			DrawText("Example: 3x + 5", 225, 100, 50, WHITE);
			DrawText("Terms: Parts of an expression separated by + or -.", 10, 175, 50, WHITE);
			DrawText("Example: in 2x + 3y - 4, the terms are2x, 3y, and - 4", 200, 250, 50, WHITE);
			DrawText("Like Terms: Terms with the same variables and", 10, 325, 50, WHITE);
			DrawText("exponents.", 10, 400, 50, WHITE);
			DrawText("Example: 2x and 5x are like terms", 225, 475, 50, WHITE);
			DrawText("dentities: Equations that are always true for", 10, 550, 50, WHITE);
			DrawText("any value of the variables.", 10, 625, 50, WHITE);
			DrawText("Example: (a + b)2 = a2 + 2ab + b2", 225, 700, 50, WHITE);
			if (testState)
			{
				MathTest[4].Draw();
			}
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Circles and Their Properties", 165, 0, 65, BLACK);
			DrawText("A circle is a set of points in a plane that are", 10, 100, 50, WHITE);
			DrawText("all equidistant from a fixed center.", 10, 175, 50, WHITE);
			DrawText("Radius (r): Distance from the center to any", 10, 250, 50, WHITE);
			DrawText("point on the circle.", 10, 325, 50, WHITE);
			DrawText("Diameter (d): Longest chord, d = 2r", 10, 400, 50, WHITE);
			DrawText("Circumference (C): Perimeter of the circle, C = 2pi * r.", 10, 475, 50, WHITE);
			DrawText("Area (A): Space inside the circle, A = pi * r2", 10, 550, 50, WHITE);
			DrawText("Chord: A line segment inside the circle", 10, 625, 50, WHITE);
			DrawText("connecting two points.", 10, 700, 50, WHITE);
			if (testState)
			{
				MathTest[5].Draw();
			}
			break;
		}
	break;
	case 3:
		if (lessonState != 0)
		{
			DrawRectangleRec(Testbutton, BLACK);
			DrawText("Test", 730, 900, 50, WHITE);
		}
		switch (lessonState) {
		case 0:
			DrawText("Subject: English", 375, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Present Simple", 165, 0, 65, BLACK);
			DrawText("Forming of the Present Simple:", 10, 100, 50, WHITE);
			DrawText("I/You/We/They + base form of the verb", 10, 175, 50, WHITE);
			DrawText("Example: I work every day.", 225, 250, 50, WHITE);
			DrawText("He/She/It + verb + -s/-es", 10, 325, 50, WHITE);
			DrawText("Example: He works in a bank.", 225, 400, 50, WHITE);
			DrawText("Negative sentences:", 10, 475, 50, WHITE);
			DrawText("I/You/We/They + do not (don’t) + base form of the verb", 10, 550, 50, WHITE);
			DrawText("Example: I don’t like coffee.", 225, 625, 50, WHITE);
			DrawText("He/She/It + does not (doesn’t) + base form of the verb", 10, 700, 50, WHITE);
			DrawText("Example: She doesn’t eat meat.", 225, 775, 50, WHITE);
			if (testState)
			{
				EnglishTest[0].Draw();
			}
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Past Simple", 165, 0, 65, BLACK);
			DrawText("Forming of Past Simple:", 10, 100, 50, WHITE);
			DrawText("For regular verbs: verb + -ed", 10, 175, 50, WHITE);
			DrawText("Example: I worked yesterday.", 225, 250, 50, WHITE);
			DrawText("For irregular verbs: second form of the verbs", 10, 325, 50, WHITE);
			DrawText("Example: He (go -> went) to school.", 225, 400, 50, WHITE);
			DrawText("Negative sentences:", 10, 475, 50, WHITE);
			DrawText("did + not (didn’t) + base form of the verb", 10, 550, 50, WHITE);
			DrawText("Example: I did not (didn’t) work yesterday.", 225, 625, 50, WHITE);
			DrawText("Questions:", 10, 700, 50, WHITE);
			DrawText("Example: Did you work yesterday?", 225, 775, 50, WHITE);
			if (testState)
			{
				EnglishTest[1].Draw();
			}
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Present Continuous", 165, 0, 65, BLACK);
			DrawText("Forming of Present Continuous:", 10, 100, 50, WHITE);
			DrawText("am/is/are + verb + -ing ", 10, 175, 50, WHITE);
			DrawText("Example: I am reading a book.", 225, 250, 50, WHITE);
			DrawText("Negative sentances:", 10, 325, 50, WHITE);
			DrawText("am/is/are + not + verb + -ing", 10, 400, 50, WHITE);
			DrawText("Example: I am not working now.", 225, 475, 50, WHITE);
			DrawText("Questions:", 10, 550, 50, WHITE);
			DrawText("Am/Is/Are + subject + verb + -ing?", 10, 625, 50, WHITE);
			DrawText("Example: Are you studying now?", 225, 700, 50, WHITE);
			if (testState)
			{
				EnglishTest[2].Draw();
			}
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Past Continuous", 165, 0, 65, BLACK);
			DrawText("Forming of Past Continuous:", 10, 100, 50, WHITE);
			DrawText("was/were + verb + -ing", 10, 175, 50, WHITE);
			DrawText("Example: I was reading a book.", 225, 250,  50, WHITE);
			DrawText("Negative sentances:", 10, 325, 50, WHITE);
			DrawText("was/were + not + verb + -ing", 10, 400, 50, WHITE);
			DrawText("Example: I was not (wasn’t) working.", 225, 475, 50, WHITE);
			DrawText("Questions:", 10, 550, 50, WHITE);
			DrawText("Was/Were + subject + verb + -ing? ", 10, 625, 50, WHITE);
			DrawText("Example: Was she sleeping?", 225, 700, 50, WHITE);
			if (testState)
			{
				EnglishTest[3].Draw();
			}
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Present Perfect", 165, 0, 65, BLACK);
			DrawText("Forming of Present Perfect:", 10, 100, 50, WHITE);
			DrawText("have/has + past participle", 10, 175, 50, WHITE);
			DrawText("Example: I have visited Paris.", 225, 250, 50, WHITE);
			DrawText("Negative sentances:", 10, 325, 50, WHITE);
			DrawText("have/has + not + past participle", 10, 400, 50, WHITE);
			DrawText("Example: I have not (haven’t) eaten sushi before.", 220, 475, 50, WHITE);
			DrawText("Questions:", 10, 550, 50, WHITE);
			DrawText("Have/Has + subject + past participle?", 10, 625, 50, WHITE);
			DrawText("Example: Have you ever been to London?", 225, 700, 50, WHITE);
			if (testState)
			{
				EnglishTest[4].Draw();
			}
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Past Perfect", 165, 0, 65, BLACK);
			DrawText("Forming of Present Perfect:", 10, 100, 50, WHITE);
			DrawText("had + past participle", 10, 175, 50, WHITE);
			DrawText("Example: I had finished my work before dinner.", 225, 250, 50, WHITE);
			DrawText("Negative sentances:", 10, 325, 50, WHITE);
			DrawText("had not (hadn’t) + past participle", 10, 400, 50, WHITE);
			DrawText("Example: I had not (hadn’t) visited Paris before.", 220, 475, 50, WHITE);
			DrawText("Questions:", 10, 550, 50, WHITE);
			DrawText("Had + subject + past participle ? ", 10, 625, 50, WHITE);
			DrawText("Example: Had you ever been to London before?", 225, 700, 50, WHITE);
			if (testState)
			{
				EnglishTest[5].Draw();
			}
			break;
		}
		break;
	case 4:
		switch (lessonState) {
		case 0:
			DrawText("Subject: Biology", 350, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology1", 400, 100, 50, WHITE);
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology6", 400, 100, 50, WHITE);
			break;
		}
		break;
	case 5:
		switch (lessonState) {
		case 0:
			DrawText("Subject: Chemistry", 300, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry1", 400, 100, 50, WHITE);
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry6", 400, 100, 50, WHITE);
			break;
		}
		break;
	}
}

void Menu::Update(int& appState, int& lessonState, bool& testState)
{
	SetMouseCursor(MOUSE_CURSOR_ARROW);

	if (CheckCollisionPointRec(GetMousePosition(), Exit))
	{
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			appState = 0;
			SetMouseCursor(MOUSE_CURSOR_ARROW);
		}

	}
	
	if (CheckCollisionPointRec(GetMousePosition(), Return))
	{
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{

			testState = false;
			MathTest[0].Reset();
			MathTest[1].Reset();
			MathTest[2].Reset();
			MathTest[3].Reset();
			MathTest[4].Reset();
			MathTest[5].Reset();
			if (appState != 1 && lessonState == 0)
			{
				appState = 1;
			}
			if (lessonState != 0)
			{
				lessonState = 0;
			}
			
			SetMouseCursor(MOUSE_CURSOR_ARROW);
		}
	}

	switch (appState)
	{
	case 1:
		if (CheckCollisionPointRec(GetMousePosition(), Math))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 2;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
				
		}
		if (CheckCollisionPointRec(GetMousePosition(), English))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 3;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Biology))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 4;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Chemistry))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 5;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		break;
	}
	switch (lessonState)
	{
	case 0:
		if (CheckCollisionPointRec(GetMousePosition(), Lesson1))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 1;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson2))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 2;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson3))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 3;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson4))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 4;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson5))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 5;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson6))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 6;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		break;
	case 1:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[0].Update();
			EnglishTest[0].Update();
		}
		break;
	case 2:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[1].Update();
			EnglishTest[1].Update();
		}
		break;
	case 3:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[2].Update();
			EnglishTest[2].Update();
		}
		break;
	case 4:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[3].Update();
			EnglishTest[3].Update();
		}
		break;
	case 5:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[4].Update();
			EnglishTest[4].Update();
		}
		break;
	case 6:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[5].Update();
			EnglishTest[5].Update();
		}
		break;
	}
}

void Menu::initialiseTests()
{
	MathTest[0] = Test(1, 3, 0);
	MathTest[0].addQuestion("Solve: x2 + 6x + 9 = 0", { " 3", " -3", " 2", " 5"});
	MathTest[0].addQuestion("Solve: 3x2 - 6x + 3 = 0", { " 2", " 4", " -4", " 1" });
	MathTest[0].addQuestion("Solve: 4x2 - 12x + 9 = 0", { " 1,5", " -1,5", " 0,5", " -0,5" });
	
	MathTest[1] = Test(1, 2, 3);
	MathTest[1].addQuestion("Solve: a = 50, b = 100, c = ?", { "150", "30", "100", "50" });
	MathTest[1].addQuestion("What triangle is it: a = 60, b = 60, c = 60", { "Acute triangle", "Square", "Right triangle", "Obtuse triangle" });
	MathTest[1].addQuestion("Solve by Pythagoras' Theorem: a = ?, b = 30cm, c = 50cm", {"160", "20", "-40", "40"});
	
	MathTest[2] = Test(1, 0, 3);
	MathTest[2].addQuestion("Solve: If f(x) = 2x2 + 3x - 5, find f(-3)", { "3", "4", "-4", "5" });
	MathTest[2].addQuestion("Is this a function {(1, 2), (2, 3), (3,4), (4, 5)}", { "Yes", "No", "I don't know", "it's numbers" });
	MathTest[2].addQuestion("if f(x) = 3x2 + 2x - 7, find f(4)", { "6", "3", "2", "-6" });

	MathTest[3] = Test(0, 2, 3);
	MathTest[3].addQuestion("6x + 9", { "3(2x+3)", "3(2x-3)", "-3(2x+3)", "3(-2x+3)" });
	MathTest[3].addQuestion("x2 + 5x + 6", { "-(x+2)(x+3)", "(x+3)", "(x+2)(x+3)", "(x+2)" });
	MathTest[3].addQuestion("6x2 - 16", { "(x+4)", "(x+1)(x+2)", "(x-3)(x+4)", "(x-4)(x+4)" });
	
	MathTest[4] = Test(0, 2, 3);
	MathTest[4].addQuestion("Simplify: 3x + 5x - 2 + 7", { " 8x + 5", " 8x - 5", " 13x", " 5 - x" });
	MathTest[4].addQuestion("Simplify: x2 + 5x + 6", { " (x - 2)(x + 3)", " (x - 2)(x + 6)", " (x + 2)(x + 3)", " (x - 4)(x + 3)" });
	MathTest[4].addQuestion("Simplify: 4x - 3x + 7 - 2", { " 5x", " 5 - x", " x - 5", " x + 5" });
	
	MathTest[5] = Test(1, 0, 2);
	MathTest[5].addQuestion("Find C = ?, if r = 7", { " 14", " 14pi", " 7", " 7pi" });
	MathTest[5].addQuestion("Find A = ?, if d = 10", { "25pi", "100", "100pi", "25" });
	MathTest[5].addQuestion("Find r = ?, if C = 31.4", { "5pi", "10", "5", "15" });

	EnglishTest[0] = Test(2, 0, 3);
	EnglishTest[0].addQuestion("She ______ (go) to school every day.", { "goes", "gos", "go", "to go" });
	EnglishTest[0].addQuestion("They ______ (play) football on weekends.", { "play", "plays", "plais", "playes" });
	EnglishTest[0].addQuestion("I ______ (like) chocolate ice cream.", { "likys", "liks", "likes", "like" });

	EnglishTest[1] = Test(1, 2, 3);
	EnglishTest[1].addQuestion("Yesterday, I ______ (go) to the market.", { "went", "go", "goed", "goes" });
	EnglishTest[1].addQuestion("She ______ (visit) her grandmother last weekend.", { "visits", "visit", "visited", "visat" });
	EnglishTest[1].addQuestion("They ______ (play) soccer yesterday afternoon.", { "pluy", "play", "playes", "played" });

	EnglishTest[2] = Test(0, 3, 2);
	EnglishTest[2].addQuestion("I _________ (read) a fascinating book right now.?", { "am reading", "reading", "read", "reads" });
	EnglishTest[2].addQuestion("She __________ (study) for her exams this week.", { "studies", "studying", "study", "is studying" });
	EnglishTest[2].addQuestion("They __________ (play) football at the moment.?", { "playing", "played", "are playing", "play" });

	EnglishTest[3] = Test(3, 0, 2);
	EnglishTest[3].addQuestion("She __________ (study) when I called her.?", { "is studying", "was studing", "studying", "was studying" });
	EnglishTest[3].addQuestion("They __________ (play) football at 5 PM yesterday.", { "were playing?", "are playing", "was playing", "playing" });
	EnglishTest[3].addQuestion("We __________ (watch) a movie when the power went out.?", { "was watching", "wathing", "were watching", "is watching" });

	EnglishTest[4] = Test(0, 1, 1);
	EnglishTest[4].addQuestion("She __________ (finish) her homework already.", { " has finished", " finished", "finish", "was finished" });
	EnglishTest[4].addQuestion("They __________ (visit) Paris three times.", { " visited", " have visited", " visiting", " been" });
	EnglishTest[4].addQuestion("I __________ (not see) that movie yet.", { "have seen", "haven't", "seen", " haven't seen" });

	EnglishTest[5] = Test(2, 1, 3);
	EnglishTest[5].addQuestion("What you _____ before the teacher arrived?", { " had do", " had finished", "had you done", " have you done" });
	EnglishTest[5].addQuestion("Had she studied for the test before she ____ it?", { " had taken", " took", " take", " taking" });
	EnglishTest[5].addQuestion("Why __ they __ the party so early?", { " did leave", " had left", " have left", " had they left" });
}