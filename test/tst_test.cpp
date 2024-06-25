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
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
