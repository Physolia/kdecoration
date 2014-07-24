/*
 * Copyright 2014  Martin Gräßlin <mgraesslin@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) version 3, or any
 * later version accepted by the membership of KDE e.V. (or its
 * successor approved by the membership of KDE e.V.), which shall
 * act as a proxy defined in Section 6 of version 3 of the license.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef KDECORATION2_DECORATION_DEFINES_H
#define KDECORATION2_DECORATION_DEFINES_H

namespace KDecoration2
{

/**
 * The DecorationButtonType is a helper type for the DecorationButton.
 * A Decoration should provide a DecorationButton for each of the types,
 * if it wants to provide further buttons it should use the Custom type.
 * The DecorationButton gets configured depending on the type. E.g. the
 * Close button gets disabled if the DecoratedClient is not closeable.
 **/
enum class DecorationButtonType
{
    /**
     * The Menu button requests showing the window menu on left or right click.
     **/
    Menu,
    /**
     * The ApplicationMenu button requests showing the application's menu on left or right click.
     */
    ApplicationMenu,
    /**
     * The OnAllDesktops button requests toggling the DecoratedClient's on all desktops state.
     * The DecoratedButton is only visible if multiple virtual desktops are available.
     **/
    OnAllDesktops,
    /**
     * The Minimize button requests minimizing the DecoratedClient. The DecorationButton is only
     * enabled if the DecoratedClient is minimizeable.
     **/
    Minimize,
    /**
     * The Maximize button requests maximizing the DecoratedClient. The DecorationButton is checkable
     * and if the DecoratedClient is maximized the DecorationButton is checked. The DecorationButton
     * supports multiple mouse buttons to change horizontal, vertical and overall maximized state.
     *
     * The DecorationButton is only enabled if the DecoratedClient is maximizeable.
     **/
    Maximize,
    /**
     * The Close button requests closing the DecoratedClient. The DecorationButton is only enabled
     * if the DecoratedClient is closeable.
     **/
    Close,
    /**
     * The QuickHelp button requests entering the context help mode. The DecorationButton is only
     * visible if the DecoratedClient provides context help.
     **/
    QuickHelp,
    /**
     * The Shade button requests toggling the DecoratedClient's shaded state. The DecoratedButton
     * is only enabled if the DecoratedClient is shadeable.
     **/
    Shade,
    /**
     * The KeepBelow button requests toggling the DecoratedClient's keep below state.
     **/
    KeepBelow,
    /**
     * The KeepAbove button requests toggling the DecoratedClient's keep above state.
     **/
    KeepAbove,
    /**
     * The Custom type allows a Decoration to provide custom DecorationButtons.
     **/
    Custom
};


/**
 * Border sizes are a combination of visual and accessibility features.
 * Larger borders should be used to increase the non title bar borders to
 * make it easier to resize the decoration
 **/
enum class BorderSize {
    /**
     * Border sizes of all non title bar sides should be set to 0.
     **/
    None,
    /**
     * Border sizes of the sides should be set to 0. Title bar and
     * the border on opposite side of the title bar should follow the
     * Normal settings.
     **/
    NoSides,
    /**
     * Borders should be smaller than Normal, e.g. a factor of 0.5.
     **/
    Tiny,
    /**
     * The default border size with borders on each side. This should
     * be the base for calculating other border sizes.
     **/
    Normal,
    /**
     * Increased border sizes, considered a factor of 1.5.
     **/
    Large,
    /**
     * Increased border sizes, considered a factor of 2.0.
     **/
    VeryLarge,
    /**
     * Increased border sizes, considered a factor of 2.5.
     **/
    Huge,
    /**
     * Increased border sizes, considered a factor of 3.0.
     **/
    VeryHuge,
    /**
     * Increased border sizes, considered a factor of 5.0.
     **/
    Oversized
};

}

#endif