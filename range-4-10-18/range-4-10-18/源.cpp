#include <iostream>
using namespace std;//#include <iostream>: ���ָ����Ϊ�˰�����׼����������� (iostream)��ʹ�������ʹ�� cin��cout��cerr �ȶ�������������������ֻ��������Ҫ���������������ʱ������Ҫ�������ͷ�ļ���
int n, n2;
//����ָ����߱�����ʹ�ñ�׼�����ռ�(std)����׼���е��������ݣ��� cout��cin��vector �ȣ���λ�� std �����ռ��С�ʹ������ָ����Ա���ÿ��ʹ�ñ�׼�����ʱ����Ҫ�� std::ǰ׺�����磺
int main()
{
	int array[1000];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	int min = array[0];
	int max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	int range = max - min;
	cout << range;

}