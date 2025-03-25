#include "test.h"
#include <iostream>
using namespace std;

Test::Test(int answer1, int answer2, int answer3)
{
	testStates = QUESTION1;
	Background = { 0, 0, 1500, 900 };
	EndBackground = { 0, 0, 1500, 900 };
	points = 0;
	correctAnswer1 = answer1;
	correctAnswer2 = answer2;
	correctAnswer3 = answer3;

}

Test::Test()
{
	testStates = QUESTION1;
	Background = { 0, 0, 1500, 900 };
	EndBackground = { 0, 0, 1500, 900 };
	points = 0;
	correctAnswer1 = 0;
	correctAnswer2 = 0;
	correctAnswer3 = 0;
}

//Returns back the points
void Test::Reset()
{
	testStates = QUESTION1;
	points = 0;
}

// Adds a new question and the answers to the test
void Test::addQuestion(string question, vector<string>answer)
{
	if (questions[0].size() == 0)
	{
		questions[0] = question;
		for (int i = 0; i < 4; i++)
		{
			answers[0][i] = answer[i];
		}
	}
	else if (questions[1].size() == 0)
	{
		questions[1] = question;
		for (int i = 0; i < 4; i++)
		{
			answers[1][i] = answer[i];
		}
	}
	else
	{
		questions[2] = question;
		for (int i = 0; i < 4; i++)
		{
			answers[2][i] = answer[i];
		}
	}
}

// Draws the current test state
void Test::Draw()
{
	switch (testStates)
	{
	case QUESTION1:
		DrawRectangleRec(Background, DARKBLUE);
		DrawText(questions[0].c_str(), 200, 0, 50, BLACK); // Draws the  question text
		for (int i = 0; i < 4; i++)
		{
			DrawRectangleRec(answersButtons[i], BLACK);
			DrawText(answers[0][i].c_str(), answersButtons[i].x, answersButtons[i].y, 50, WHITE);
		}
		break;
	case QUESTION2:
		DrawRectangleRec(Background, DARKBLUE);
		DrawText(questions[1].c_str(), 200, 0, 50, BLACK);
		for (int i = 0; i < 4; i++)
		{
			DrawRectangleRec(answersButtons[i], BLACK);
			DrawText(answers[1][i].c_str(), answersButtons[i].x, answersButtons[i].y, 50, WHITE);
		}
		break;
	case QUESTION3:
		DrawRectangleRec(Background, DARKBLUE);
		DrawText(questions[2].c_str(), 200, 0, 50, BLACK);
		for (int i = 0; i < 4; i++)
		{
			DrawRectangleRec(answersButtons[i], BLACK);
			DrawText(answers[2][i].c_str(), answersButtons[i].x, answersButtons[i].y, 50, WHITE);
		}
		break;
	case ENDRESULT:
		DrawRectangleRec(EndBackground, DARKBLUE);
		DrawText("Your point are:", 100, 0, 75, BLACK);
		DrawText(to_string(points).c_str(), 700, 0, 75, BLACK);
		break;
	}

}

// Updates test state based on user input
void Test::Update()
{
	switch (testStates)
	{
	case QUESTION1:
		for (int i = 0; i < 4; i++)
		{
			if (isButtonPressed(answersButtons[i]))
			{
				if (i == correctAnswer1)
				{
					points += 10;
				}
				testStates = QUESTION2;
			}
		}
		break;
	case QUESTION2:
		for (int i = 0; i < 4; i++)
		{
			if (isButtonPressed(answersButtons[i]))
			{
				if (i == correctAnswer2)
				{
					points += 10;
				}
				testStates = QUESTION3;
			}
		}
		break;
	case QUESTION3:
		for (int i = 0; i < 4; i++)
		{
			if (isButtonPressed(answersButtons[i]))
			{
				if (i == correctAnswer3)
				{
					points += 10;
				}
				testStates = ENDRESULT;
			}
		}
		break;
	}
}


bool Test::isButtonPressed(Rectangle Button)
{
	if (CheckCollisionPointRec(GetMousePosition(), Button))
	{
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			return true;
			SetMouseCursor(MOUSE_CURSOR_ARROW);
		}
	}
	return false;
}