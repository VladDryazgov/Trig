// CMakeProject1.cpp : Defines the entry point for the application.
//
#include "mymath.h"


AnsHand sin(float k)
{
	AnsHand ans;
	ans.x = k;
	ans.y = k + k * k * k / 6;

	return ans;
}