#include <QtTest>

// add necessary includes here

#include "../unitTests/gcd.h"

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_gcd();
};

test::test() {}

test::~test() {}

void test::test_gcd() {
    GCD g;
    QCOMPARE(g.gcd(10, 5), 5);
    QCOMPARE(g.gcd(10, 11), 1);
    QCOMPARE(g.gcd(10, 0), 0);

    QCOMPARE(g.lcm(10, 5), 10);
    QCOMPARE(g.lcm(10, 11), 110);
    QCOMPARE(g.lcm(10, 0), 0);
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
