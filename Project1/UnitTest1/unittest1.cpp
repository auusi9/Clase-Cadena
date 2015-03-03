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
			Punt2d target1;
			Punt2d target2;

			target1.p = 3;
			target1.q = 1;

			target2.p = 2;
			target2.q = 3;

			target1 += target2;

			Assert::IsTrue(target1.p == 5 && target1.q == 4);

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
			Punt2d target1;
			Punt2d target2;

			target1.p = 3;
			target1.q = 4;

			target2.p = 2;
			target2.q = 2;

			target1 -= target2;

			Assert::IsTrue(target1.p == 1 && target1.q == 2);

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
			Cadena* target = new Cadena();

			Assert::IsTrue(target->longitud == 1);
			Assert::AreEqual(target->car, "");
		}
		TEST_METHOD(TestMethod12) //char* constructor
		{


		}
		TEST_METHOD(TestMethod13) //constructor ( _string, ...)
		{
			Cadena target("%s", "hola");
			Assert::IsTrue(target == "hola");
		}
		TEST_METHOD(TestMethod14) //operator == (with reference)
		{
			Cadena target1("%s", "hola");
			Cadena& rtarget1 = target1;
			Cadena target2("%s", "hola");
			Assert::IsTrue(rtarget1.operator == (target2));
		}
		TEST_METHOD(TestMethod15) //operator == (with char*)
		{
			Cadena target1("%s", "hola");
			Cadena target2("%s", "hola");
			Assert::IsTrue(target1.operator == (target2));
		}
		TEST_METHOD(TestMethod16) //operator = (with reference)
		{
			Cadena target1("%s", "hola");
			Cadena target2("%s", "hola mon");

			
		}
		TEST_METHOD(TestMethod17) //operator = (with char*)
		{
			Cadena target1("%s", "hola");
			Cadena target2("%s", "hola mon");
			

		}
		TEST_METHOD(TestMethod18) //operator != (with reference)
		{
			Cadena target1("%s", "hola");
			Cadena target2("%s", "mon");

			Assert::IsTrue(target1 != target2);

		}
		TEST_METHOD(TestMethod19) //operator != (with char*)
		{
			Cadena target1;

			Assert::IsFalse(target1 != NULL);


			Cadena target2("%s", "hola");

			Assert::IsTrue(target2 != "mon");


		}
		TEST_METHOD(TestMethod20) //Clear unit test
		{
			Cadena target("%s", "hola");

			target.Clear();

			Assert::AreEqual(target.car, "");
		}
		
		TEST_METHOD(TestMethod22) //Length
		{
			Cadena target("%s", "hola");

			Assert::IsTrue(target.Length() == 4);


		}
		TEST_METHOD(TestMethod23) //getString
		{
			Cadena target("%s", "hola");

			Assert::AreEqual(target.getString(), "hola");

		}


	};
}