#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 it/Lab 6.1 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[25] = { 87, 31, 6, 64, 47, 49, 57, 30, 73, 22, 5, 42, 42, 20, 21, 27, 6, 84, 16, 68, 55, 64, 53, 29, 33 };
			int c = countElements(a, 25);
			Assert::AreEqual(c, 22);
		}
		TEST_METHOD(TestMethod2)
		{
			int a[25] = { 87, 31, 6, 64, 47, 49, 57, 30, 73, 22, 5, 42, 42, 20, 21, 27, 6, 84, 16, 68, 55, 64, 53, 29, 33 };
			int t = sumElements(a, 25);
			Assert::AreEqual(t, 838);
		}
	};
}
