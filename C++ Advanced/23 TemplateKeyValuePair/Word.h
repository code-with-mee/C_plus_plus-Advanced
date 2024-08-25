#pragma once
#include <iostream>

using namespace std;

template<typename TKey, typename TValue>
class Word
{
private:
	TKey key;
	TValue value;
public:
	Word();
	Word(TKey key, TValue value);
	void SetKey(TKey key);
	void SetValue(TValue value);
	TKey GetKey();
	TValue GetValue();
};

template<typename TKey, typename TValue>
inline Word<TKey, TValue>::Word()
{
}

template<typename TKey, typename TValue>
inline Word<TKey, TValue>::Word(TKey key, TValue value)
{
	this->key = key;
	this->value = value;
}

template<typename TKey, typename TValue>
inline void Word<TKey, TValue>::SetKey(TKey key)
{
	this->key = key;
}

template<typename TKey, typename TValue>
inline void Word<TKey, TValue>::SetValue(TValue value)
{
	this->value = value;
}

template<typename TKey, typename TValue>
inline TKey Word<TKey, TValue>::GetKey()
{
	return this->key;
}

template<typename TKey, typename TValue>
inline TValue Word<TKey, TValue>::GetValue()
{
	return this->value;
}
