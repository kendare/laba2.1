#pragma once

class Zheevotnie
{
public:
	Zheevotnie();
	~Zheevotnie();
	void moove();
};

class Mleecop: public Zheevotnie 
{
public:
	Mleecop();
	~Mleecop();
	void eating(int a);
	int a;
};
class Chlenisto : public Zheevotnie
{
public:
	Chlenisto();
	~Chlenisto();
	void clats();

};
class Nasec : public Zheevotnie
{
public:
	Nasec();
	~Nasec();
	void polet();
};
class Myrovi : public Nasec
{
public:
	Myrovi();
	~Myrovi();
	void build();
};


class bee : public Nasec
{
public:
	bee();
	~bee();
	void med();
};

class crab : public Chlenisto
{
public:
	crab();
	~crab();
	void klats();
};

class RaCkee : public Chlenisto
{
public:
	RaCkee();
	~RaCkee();
	void shelk();
};

class cat : public Mleecop
{
public:
	cat();
	~cat();
	void meow();
};
class dog : public Mleecop
{
public:
	dog();
	~dog();
	void roof();
};

