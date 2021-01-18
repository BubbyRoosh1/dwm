static const char norm_fg[] = "#cb9da7";
static const char norm_bg[] = "#08001A";
static const char norm_border[] = "#8e6d74";

static const char sel_fg[] = "#cb9da7";
static const char sel_bg[] = "#6E2B4D";
static const char sel_border[] = "#cb9da7";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
