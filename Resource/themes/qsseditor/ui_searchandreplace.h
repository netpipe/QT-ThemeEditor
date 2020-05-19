/********************************************************************************
** Form generated from reading UI file 'searchandreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHANDREPLACE_H
#define UI_SEARCHANDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchAndReplace
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QCheckBox *checkReplace;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkCs;
    QCheckBox *checkWhole;
    QCheckBox *checkRegexp;
    QVBoxLayout *verticalLayout;
    QPushButton *pushFind;
    QPushButton *pushReplaceAndNext;
    QPushButton *pushReplaceAll;
    QPushButton *pushClose;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioUp;
    QRadioButton *radioDown;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineReplace;
    QLineEdit *lineFind;

    void setupUi(QDialog *SearchAndReplace)
    {
        if (SearchAndReplace->objectName().isEmpty())
            SearchAndReplace->setObjectName(QStringLiteral("SearchAndReplace"));
        SearchAndReplace->resize(370, 166);
        gridLayout_3 = new QGridLayout(SearchAndReplace);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(SearchAndReplace);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        checkReplace = new QCheckBox(SearchAndReplace);
        checkReplace->setObjectName(QStringLiteral("checkReplace"));

        gridLayout_3->addWidget(checkReplace, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(SearchAndReplace);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        checkCs = new QCheckBox(groupBox_2);
        checkCs->setObjectName(QStringLiteral("checkCs"));

        gridLayout_2->addWidget(checkCs, 0, 0, 1, 1);

        checkWhole = new QCheckBox(groupBox_2);
        checkWhole->setObjectName(QStringLiteral("checkWhole"));

        gridLayout_2->addWidget(checkWhole, 1, 0, 1, 1);

        checkRegexp = new QCheckBox(groupBox_2);
        checkRegexp->setObjectName(QStringLiteral("checkRegexp"));

        gridLayout_2->addWidget(checkRegexp, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushFind = new QPushButton(SearchAndReplace);
        pushFind->setObjectName(QStringLiteral("pushFind"));

        verticalLayout->addWidget(pushFind);

        pushReplaceAndNext = new QPushButton(SearchAndReplace);
        pushReplaceAndNext->setObjectName(QStringLiteral("pushReplaceAndNext"));
        pushReplaceAndNext->setEnabled(false);

        verticalLayout->addWidget(pushReplaceAndNext);

        pushReplaceAll = new QPushButton(SearchAndReplace);
        pushReplaceAll->setObjectName(QStringLiteral("pushReplaceAll"));
        pushReplaceAll->setEnabled(false);

        verticalLayout->addWidget(pushReplaceAll);

        pushClose = new QPushButton(SearchAndReplace);
        pushClose->setObjectName(QStringLiteral("pushClose"));

        verticalLayout->addWidget(pushClose);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 3, 3, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(SearchAndReplace);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioUp = new QRadioButton(groupBox);
        radioUp->setObjectName(QStringLiteral("radioUp"));

        gridLayout->addWidget(radioUp, 0, 0, 1, 1);

        radioDown = new QRadioButton(groupBox);
        radioDown->setObjectName(QStringLiteral("radioDown"));

        gridLayout->addWidget(radioDown, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 2, 1, 1);

        lineReplace = new QLineEdit(SearchAndReplace);
        lineReplace->setObjectName(QStringLiteral("lineReplace"));
        lineReplace->setEnabled(false);

        gridLayout_3->addWidget(lineReplace, 1, 1, 1, 2);

        lineFind = new QLineEdit(SearchAndReplace);
        lineFind->setObjectName(QStringLiteral("lineFind"));

        gridLayout_3->addWidget(lineFind, 0, 1, 1, 2);

        QWidget::setTabOrder(lineFind, checkReplace);
        QWidget::setTabOrder(checkReplace, lineReplace);
        QWidget::setTabOrder(lineReplace, radioUp);
        QWidget::setTabOrder(radioUp, radioDown);
        QWidget::setTabOrder(radioDown, checkCs);
        QWidget::setTabOrder(checkCs, checkWhole);
        QWidget::setTabOrder(checkWhole, checkRegexp);
        QWidget::setTabOrder(checkRegexp, pushFind);
        QWidget::setTabOrder(pushFind, pushReplaceAndNext);
        QWidget::setTabOrder(pushReplaceAndNext, pushReplaceAll);
        QWidget::setTabOrder(pushReplaceAll, pushClose);

        retranslateUi(SearchAndReplace);
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), lineReplace, SLOT(setEnabled(bool)));
        QObject::connect(pushClose, SIGNAL(clicked()), SearchAndReplace, SLOT(accept()));
        QObject::connect(pushFind, SIGNAL(clicked()), SearchAndReplace, SLOT(find()));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), pushReplaceAndNext, SLOT(setEnabled(bool)));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), pushReplaceAll, SLOT(setEnabled(bool)));
        QObject::connect(pushReplaceAndNext, SIGNAL(clicked()), SearchAndReplace, SLOT(replaceAndNext()));
        QObject::connect(pushReplaceAll, SIGNAL(clicked()), SearchAndReplace, SLOT(slotReplaceAll()));
        QObject::connect(lineFind, SIGNAL(textChanged(QString)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(lineReplace, SIGNAL(textChanged(QString)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(radioUp, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkCs, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkWhole, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkRegexp, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));

        QMetaObject::connectSlotsByName(SearchAndReplace);
    } // setupUi

    void retranslateUi(QDialog *SearchAndReplace)
    {
        SearchAndReplace->setWindowTitle(QApplication::translate("SearchAndReplace", "Find and Replace", Q_NULLPTR));
        label->setText(QApplication::translate("SearchAndReplace", "Find:", Q_NULLPTR));
        checkReplace->setText(QApplication::translate("SearchAndReplace", "Replace with:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SearchAndReplace", "Options", Q_NULLPTR));
        checkCs->setText(QApplication::translate("SearchAndReplace", "Case sensitive", Q_NULLPTR));
        checkWhole->setText(QApplication::translate("SearchAndReplace", "Whole words", Q_NULLPTR));
        checkRegexp->setText(QApplication::translate("SearchAndReplace", "Regular expression", Q_NULLPTR));
        pushFind->setText(QApplication::translate("SearchAndReplace", "Find", Q_NULLPTR));
        pushReplaceAndNext->setText(QApplication::translate("SearchAndReplace", "Replace&&Next", Q_NULLPTR));
        pushReplaceAll->setText(QApplication::translate("SearchAndReplace", "Replace All", Q_NULLPTR));
        pushClose->setText(QApplication::translate("SearchAndReplace", "Close", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SearchAndReplace", "Direction", Q_NULLPTR));
        radioUp->setText(QApplication::translate("SearchAndReplace", "Up", Q_NULLPTR));
        radioDown->setText(QApplication::translate("SearchAndReplace", "Down", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchAndReplace: public Ui_SearchAndReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHANDREPLACE_H
