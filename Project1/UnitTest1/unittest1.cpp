#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/ClaseCadena.h"
#include "../Project1/ClasePunt.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1) //setZero method
		{
			Punt2d a;
			a.SetZero();
			Assert::IsTrue(a.p == 0 && a.q == 0);
		}
		TEST_METHOD(TestMethod2) //isZero method
		{
			Punt2d a;
			a.IsZero();
			if (a.p == 0 && a.q == 0)
				Assert::IsTrue(a.p == 0 && a.q == 0);
		}
		TEST_METHOD(TestMethod3) //negatePos method
		{
			Punt2d a;
			Punt2d b;
			a.p = 1;
			a.q = 1;
			b.p = -1;
			b.q = -1;


			Assert::IsTrue(a.p == b.p && a.q == b.q);
		}
		TEST_METHOD(TestMethod4) //distanceTo method
		{
			Punt2d a;
			Punt2d& ra = a;
			Punt2d b;
			a.p = 4;
			a.q = 4;
			b.p = 2;
			b.q = 2;

			b.DistanceTo(ra);
		}
		TEST_METHOD(TestMethod5) //operator +
		{
			Punt2d a;
			Punt2d b;
			Punt2d& rb = b;
			Punt2d c;
			a.p = 4;
			a.q = 4;
			b.p = 3;
			b.q = 3;

			c = a + rb;

			Assert::IsTrue(c == a.operator+ (rb));
		}
		TEST_METHOD(TestMethod6) //operator +=
		{


		}
		TEST_METHOD(TestMethod7) //operator -
		{
			Punt2d a;
			Punt2d b;
			Punt2d& rb = b;
			Punt2d c;
			a.p = 4;
			a.q = 4;
			b.p = 3;
			b.q = 3;

			c = a - rb;

			Assert::IsTrue(c == a.operator- (rb));
		}
		TEST_METHOD(TestMethod8) //operator -=
		{


		}
		TEST_METHOD(TestMethod9) //operator ==
		{
			Punt2d a;
			Punt2d b;
			a.p = 1;
			a.q = 1;
			b.p = 1;
			b.q = 1;

			Assert::IsTrue(a.operator == (b));
		}
		TEST_METHOD(TestMethod10) //operator !=
		{
			Punt2d a;
			Punt2d b;
			a.p = 1;
			a.q = 1;
			b.p = 2;
			b.q = 2;

			Assert::IsTrue(a.operator != (b));
		}

		//--STRING UNIT TEST---------------------------------------------------
		TEST_METHOD(TestMethod11) //empty constructor
		{
			Cadena str;
			Assert::IsTrue(str == "");
		}
		TEST_METHOD(TestMethod12) //char* constructor
		{


		}
		TEST_METHOD(TestMethod13) //constructor ( _string, ...)
		{
			Cadena str("%s", "monster");
			Assert::IsTrue(str == "monster");
		}
		TEST_METHOD(TestMethod14) //operator == (with reference)
		{
			Cadena str1("%s", "monster");
			Cadena& rstr1 = str1;
			Cadena str2("%s", "monster");
			Assert::IsTrue(rstr1.operator == (str2));
		}
		TEST_METHOD(TestMethod15) //operator == (with char*)
		{
			Cadena str1("%s", "monster");
			Cadena str2("%s", "monster");
			Assert::IsTrue(str1.operator == (str2));
		}
		TEST_METHOD(TestMethod16) //operator = (with reference)
		{
			Cadena str1("%s", "monster");
			Cadena& rstr1 = str1;
			Cadena str2("%s", "monster hunter");
			Assert::IsTrue(str2.operator = (rstr1) == "monster hunter");
		}
		TEST_METHOD(TestMethod17) //operator = (with char*)
		{
			Cadena str1("%s", "monster");
			Cadena str2("%s", "monster hunter");
			Assert::IsTrue(str2.operator = (str1) == "monster hunter");
		}
		TEST_METHOD(TestMethod18) //operator != (with reference)
		{


		}
		TEST_METHOD(TestMethod19) //operator != (with char*)
		{


		}
		TEST_METHOD(TestMethod20) //Clear unit test
		{
			Cadena str("%s", "monster");
			str.Clear();
			Assert::IsTrue(str == "");
		}
		/*
		TEST_METHOD(TestMethod21) //Alloc unit test
		{
		Cadena str;
		str.Alloc(5);
		Assert::IsTrue((strlen(str) + 1) == 6);
		}
		*/
		TEST_METHOD(TestMethod22) //Length
		{


		}
		TEST_METHOD(TestMethod23) //GetString
		{


		}
	};
}