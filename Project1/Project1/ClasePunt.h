#include <stdio.h>
#include <math.h>
class Punt2d
{
public:
	float p, q;

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

	void SetZero(){
		 p = 0.0; q = 0.0;

	}
	float DistanceTo(Punt2d r){


		return sqrtf((p - r.p)*(p - r.p) + (q - r.q)*(q - r.q));

	}
};
