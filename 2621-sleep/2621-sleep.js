/**
 * @param {number} millis
 */

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
async function sleep(millis) {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve()
        }, millis)
    });
}