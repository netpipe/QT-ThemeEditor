/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboLang;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkOpenLast;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinPreviewDelay;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *labelRestart;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QStringLiteral("Options"));
        Options->resize(188, 167);
        gridLayout = new QGridLayout(Options);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Options);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboLang = new QComboBox(Options);
        comboLang->setObjectName(QStringLiteral("comboLang"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboLang->sizePolicy().hasHeightForWidth());
        comboLang->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboLang);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        checkOpenLast = new QCheckBox(Options);
        checkOpenLast->setObjectName(QStringLiteral("checkOpenLast"));

        gridLayout->addWidget(checkOpenLast, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Options);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinPreviewDelay = new QSpinBox(Options);
        spinPreviewDelay->setObjectName(QStringLiteral("spinPreviewDelay"));
        spinPreviewDelay->setMinimum(100);
        spinPreviewDelay->setMaximum(5000);

        horizontalLayout_2->addWidget(spinPreviewDelay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        labelRestart = new QLabel(Options);
        labelRestart->setObjectName(QStringLiteral("labelRestart"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelRestart->setFont(font);
        labelRestart->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRestart, 4, 0, 1, 1);

        line = new QFrame(Options);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Options);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 1);

        QWidget::setTabOrder(comboLang, checkOpenLast);
        QWidget::setTabOrder(checkOpenLast, spinPreviewDelay);
        QWidget::setTabOrder(spinPreviewDelay, buttonBox);

        retranslateUi(Options);
        QObject::connect(buttonBox, SIGNAL(accepted()), Options, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Options, SLOT(reject()));
        QObject::connect(comboLang, SIGNAL(currentIndexChanged(int)), Options, SLOT(slotSomethingImportantChanged()));

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Options", Q_NULLPTR));
        label->setText(QApplication::translate("Options", "Language:", Q_NULLPTR));
        checkOpenLast->setText(QApplication::translate("Options", "Open last style at startup", Q_NULLPTR));
        label_2->setText(QApplication::translate("Options", "Preview delay:", Q_NULLPTR));
        spinPreviewDelay->setSuffix(QApplication::translate("Options", "ms", Q_NULLPTR));
        labelRestart->setText(QApplication::translate("Options", "Need restart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
