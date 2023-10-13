class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class Joinliv3dMainServer: ServerBrowser {
                    idc = -1;
                    text = "liv3d's main server";
                    tooltip = "Connect to liv3d's server of death";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['116.202.233.203', 2302, '']";
                };
                class Joinliv3dAntiStasi: ServerBrowser {
                    idc = -1;
                    text = "liv3d's Antistasi server";
                    tooltip = "Connect to liv3d's AntiStasi server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['116.202.233.203', 2402, '']";
                };
            };
        };
    };
};