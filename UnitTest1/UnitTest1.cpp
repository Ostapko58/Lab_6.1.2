#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.2/Lab_6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[5]{ 12,8,7,-3,-8 };
			Assert::AreEqual(Sum(arr, 5,0,0), 20);
		}
	};
}
