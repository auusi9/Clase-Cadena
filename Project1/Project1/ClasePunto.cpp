#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <math.h>
class Punt2d
{
private:
	float p, q;
public:
	Punt2d(){ p = 0.0; q = 0.0; };
	Punt2d(const float _p, const float _q){ p = _p; q = _q; };

	Punt2d operator -(const Punt2d &a)const{
		Punt2d b;
		b.p = p - a.p;
		b.q = q - a.q;
		return(b);
	}
	Punt2d operator +(const Punt2d &a)const{
		Punt2d b;
		b.p = p + a.p;
		b.q = q + a.q;
		return(b);
	}
	const Punt2d& operator +=(const Punt2d &a)
	{
		p += a.p;
		q += a.q;
		return(*this);
	}

	const Punt2d& operator -=(const Punt2d &a)
	{
		p -= a.p;
		q -= a.q;
		return(*this);
	}

	bool operator ==(const Punt2d& a) const
	{
		return (p == a.p && q == a.q);
	}

	bool operator !=(const Punt2d& a) const
	{
		return (p != a.p || q != a.q);
	}
	bool IsZero(){
		return (p == 0 && q == 0);
	}

	~Punt2d();

	int SetZero(){
		p = 0.0; q = 0.0;

	}
	float Distanceto(Punt2d r){


		return sqrtf(pow(p - r.p) - pow(q - r.q));

	}
};

