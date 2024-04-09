#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 4.2/Employee.h"
#include "..//OOP Lab 4.2/Hour Emp.h"
#include "..//OOP Lab 4.2/Hour Emp.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Hourly_employed emp(5);
			Assert::AreEqual(400.0, emp.CalculateSallary());
		}
	};
}

